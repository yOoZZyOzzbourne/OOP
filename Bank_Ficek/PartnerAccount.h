#pragma once
#include "Account.h"

class PartnerAccount : public Account {

private:
	Client* partner;

public:
	PartnerAccount(int i, Client* c, Client* p);
	PartnerAccount(int i, Client* c, Client* p, double ir);

	Client* GetPartner();
};