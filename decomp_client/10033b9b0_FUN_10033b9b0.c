
void FUN_10033b9b0(long param_1,QString *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  QString local_38;
  undefined1 local_2a;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_38,uVar4);
  cVar2 = operator==(&local_38,param_2);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10033ba28;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10033ba28:
  if (cVar2 != '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    lVar3 = FUN_100319390(uVar4);
    if ((lVar3 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
      uVar4 = FUN_10018c2b0(lVar3);
      FUN_100a40730(lVar1,param_5,uVar4);
    }
  }
  return;
}

