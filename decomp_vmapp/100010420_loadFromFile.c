
/* CBaseNode::loadFromFile(QString, bool) */

undefined4 CBaseNode::loadFromFile(QString param_1,bool param_2)

{
  undefined4 uVar1;
  undefined7 in_register_00000031;
  QFile local_28 [16];
  
  QFile::QFile(local_28,(QString *)CONCAT71(in_register_00000031,param_2));
  uVar1 = (**(code **)(*(long *)param_1.field0_0x0 + 0x50))(param_1.field0_0x0,local_28,1);
  QFile::~QFile(local_28);
  return uVar1;
}

