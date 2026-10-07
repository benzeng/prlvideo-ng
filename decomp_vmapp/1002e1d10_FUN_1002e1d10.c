
void FUN_1002e1d10(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bb47c0;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"Usb virtual usb printer destroyed");
  }
  FUN_1002e1e40(param_1);
  QMutex::~QMutex((QMutex *)(param_1 + 0x13));
  FUN_1002e25d0(param_1 + 0xd);
  pQVar1 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002e1d9f;
      pQVar1 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002e1d9f:
  FUN_100269ca0(param_1 + 9);
  FUN_1002dc020(param_1);
  return;
}

