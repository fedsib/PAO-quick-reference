bolletta& bolletta::operator=(const bolletta& b){
	if(this != &b){
		distruggi(first);
		first = copia(b.first);
	}
	return *this;
}