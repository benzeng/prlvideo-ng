
long * FUN_100ad99b0(long *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((param_3 == (uint *)0x0) && (uVar5 = 0, *(int *)(*param_1 + 0x20) == 0)) goto LAB_100ad9a3d;
  uVar1 = *(uint *)(*param_1 + 0x24);
  QByteArray::QByteArray((QByteArray *)&local_40,(char *)param_2,8);
  uVar5 = qHash((QByteArray *)&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100ad9a31;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100ad9a31:
  uVar5 = uVar5 ^ uVar1;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
LAB_100ad9a3d:
  plVar2 = (long *)*param_1;
  if (*(uint *)(plVar2 + 4) != 0) {
    uVar4 = (ulong)uVar5 % (ulong)*(uint *)(plVar2 + 4);
    param_1 = (long *)(plVar2[1] + uVar4 * 8);
    plVar3 = *(long **)(plVar2[1] + uVar4 * 8);
    if (plVar3 != plVar2) {
      plVar6 = param_1;
      do {
        param_1 = plVar3;
        if (((*(uint *)(param_1 + 1) == uVar5) && (param_2[1] == (int)param_1[2])) &&
           (*param_2 == *(int *)((long)param_1 + 0xc))) {
          return plVar6;
        }
        plVar3 = (long *)*param_1;
        plVar6 = param_1;
      } while ((long *)*param_1 != plVar2);
    }
  }
  return param_1;
}

