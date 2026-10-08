
void FUN_100cd37c0(QObject *param_1)

{
  QObject *pQVar1;
  Data *pDVar2;
  
  *(undefined **)param_1 = &DAT_102259dc0;
  FUN_100cd5530();
  pQVar1 = param_1 + 0x20;
  FUN_100cd5e10(pQVar1);
  if (DAT_102311910 == param_1) {
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Destroying keyboard owner instance !!!");
  }
  if (DAT_102311918 == param_1) {
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Destroying mouse owner instance !!!");
  }
  pDVar2 = *(Data **)pQVar1;
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_100cd385b;
      pDVar2 = *(Data **)pQVar1;
    }
    QListData::dispose(pDVar2);
  }
LAB_100cd385b:
  QObject::~QObject(param_1);
  return;
}

