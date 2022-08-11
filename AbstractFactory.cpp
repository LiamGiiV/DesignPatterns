// From page 105
class MazeFactory {
public:
	MazeFactory();

	virtual Maze* MakeMaze() const {
		return new Maze;
	}
	virtual Wall* MakeWall() const {
		return new Wall;
	}
	virtual room* MakeRoom(int n) const {
		return new Room(n);
	}
	virtual Door* MakeDoor(Room* r1, Room* r2) const {
		return new Door(r1, r2);
	}
};

// Create Maze function that takes a MazeFactory as a parameter
Maze* MazeGame::CreateMaze(MazeFactory& factory) {
	Maze* aMaze = factory.MakeMaze();
	Room* r1 = factory.MakeRoom(1);
	Room* r2 = factory.MakeRoom(2);
	Door* aDoor = factory.MakeDoor(r1, r2);

	aMaze->AddRoom(r1);
	aMaze->AddRoom(r2);

	r1->SetSide(North, factory.MakeWall());
	r1->SetSide(East, aDoor);
	r1->SetSide(South, factory.MakeWall());
	r1->SetSide(West, factory.MakeWall());

	r1->SetSide(North, factory.MakeWall());
	r1->SetSide(East, factory.MakeWall());
	r1->SetSide(South, factory.MakeWall());
	r1->SetSide(West, aDoor);

	return aMaze;
}

// From Page 106
class EnchantedMazeFactory : public MazeFactory {
public:
	EnchantedMazeFactory();

	virtual Room* MakeRoom(int n) const {
		return new EnchantedRoom(n, CastSpell());
	}

	virtual Door* MakeDoor(Room* r1, Room* r2) const {
		return new DoorNeedingSpell(r1, r2);
	}

protected:
	Spell* CastSpell() const;
};