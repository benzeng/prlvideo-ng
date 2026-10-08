
undefined8 FUN_100d3abd0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  
  QDomElement::tagName();
  iVar1 = QString::compare_helper
                    (local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),
                     "SavedStateItem",0xffffffff,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100d3ac43;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d3ac43:
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = FUN_100d3ad80(param_1,param_2,param_1);
  }
  return uVar2;
}

