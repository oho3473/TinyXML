#pragma once
#include<vector>
#include<string>

struct Status
{
	int mLevel;
	int mHP;
	int mMP;
};

struct Item
{
	std::string mName{};
	int mGold{};
};

class Monster
{
private:
	std::string mName{};
	Status mStatus{};
	std::vector<Item> mDropItem{};

public:
	void SetName(const char* name) { mName = name; }
	void SetStatus(const Status& status) { mStatus = status; }
	void AddDropItem(const Item& item) { mDropItem.push_back(item); }
	std::string& GetName() { return mName; }
	Status& GetStatus() { return mStatus; }
	std::vector<Item>& GetDropItems() { return mDropItem; }
};

