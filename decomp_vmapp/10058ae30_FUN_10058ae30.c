
ulong FUN_10058ae30(long param_1,QString *param_2)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  QString local_40;
  undefined1 local_31;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x60);
  if (iVar4 != 0) {
    uVar5 = 0;
    do {
      uVar3 = *(long *)(param_1 + 0x58) + uVar5;
      plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 >> 9) * 8) +
                         (uVar3 & 0x1ff) * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xd0))(&local_40);
        cVar2 = operator==(&local_40,param_2);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10058aee0;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_10058aee0:
        if (cVar2 != '\0') {
          return uVar5 & 0xffffffff;
        }
      }
      uVar5 = uVar5 + 1;
    } while (iVar4 != (int)uVar5);
  }
  return 0xffffffff;
}

