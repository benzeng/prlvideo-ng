
/* CBaseNode::saveToFile() */

undefined4 __thiscall CBaseNode::saveToFile(CBaseNode *this)

{
  undefined4 uVar1;
  QFile local_28 [16];
  
  QFile::QFile(local_28,(QString *)(this + 0x28));
  uVar1 = (**(code **)(*(long *)this + 0x60))(this,local_28,1,1);
  QFile::~QFile(local_28);
  return uVar1;
}

