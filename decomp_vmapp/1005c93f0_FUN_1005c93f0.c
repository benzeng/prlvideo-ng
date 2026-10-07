
undefined8 FUN_1005c93f0(long param_1)

{
  QFileInfo local_28 [8];
  
  FUN_1005b8840();
  *(undefined2 *)(param_1 + 0x68) = 0;
  QMutex::lock();
  QDomNode::clear();
  FUN_100603590(param_1 + 0x70,*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(long *)(param_1 + 0x70) = param_1 + 0x78;
  *(undefined8 *)(param_1 + 0x78) = 0;
  QDomNode::clear();
  QDomNode::clear();
  QMutex::unlock();
  QFileInfo::QFileInfo(local_28);
  QFileInfo::operator=((QFileInfo *)(param_1 + 0x60),local_28);
  QFileInfo::~QFileInfo(local_28);
  QDomNode::clear();
  QDomNode::clear();
  FUN_1007ea1f0(param_1 + 0x50);
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x10) + 0x18))();
  return 0;
}

