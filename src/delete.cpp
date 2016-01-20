void bolletta::nodo::operator delete(void* p){
	if(p){
		nodo* q = static_cast<nodo*>(p);
		q->riferimenti--;
		if(q->riferimenti == 0){}
			delete q->next;
			::delete q;
		}
	}
}