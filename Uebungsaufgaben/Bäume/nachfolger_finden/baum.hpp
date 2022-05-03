#ifndef BAUM_H
#define BAUM_H

struct Element {
    int _key = 0;
    Element * _left = nullptr;
    Element * _right = nullptr;

    bool empty() {
        return _left == nullptr;
    }

    void set(int key) {
        _key = key;
        if (empty()) {
            _left = new Element();
            _right = new Element();
        }
    }

    void insert(int key) {
        if (empty()) { set(key); return; }
        if (key <= _key) { _left->insert(key); return; }
        _right->insert(key);
    }

    Element * get( int key ) {
        if (empty()) { return nullptr; }
        if (key == _key) { return this; }
        if (key < _key) { return _left->get(key); }
        return _right->get(key);
    }

    Element * successor( int key_ );
};

#endif