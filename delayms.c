void delayus(unsigned int dlyus)
{
	for(dlyus*=12;dlyus>0;dlyus--);
}
void delayms(unsigned int dlyms)
{
	dlyms*=12000;
	while(dlyms--);
}
void delays(unsigned int dlys)
{
	for(dlys*=12000000;dlys>0;dlys--);
}


	