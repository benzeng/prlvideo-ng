
/* CBaseNodeSignals::metaObject() const */

undefined ** __thiscall CBaseNodeSignals::metaObject(CBaseNodeSignals *this)

{
  undefined **ppuVar1;
  
  if (*(long *)(*(long *)(this + 8) + 0x28) != 0) {
    ppuVar1 = (undefined **)QObjectData::dynamicMetaObject();
    return ppuVar1;
  }
  return &staticMetaObject;
}

