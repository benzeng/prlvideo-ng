
long * FUN_1001bfdb0(long *param_1,QNetworkProxy *param_2,uint *param_3)

{
  ulong uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  QString local_40;
  undefined1 local_32;
  
  if ((param_3 == (uint *)0x0) && (uVar8 = 0, *(int *)(*param_1 + 0x20) == 0)) goto LAB_1001bfe49;
  uVar8 = *(uint *)(*param_1 + 0x24);
  QNetworkProxy::hostName();
  uVar4 = qHash(&local_40,0);
  uVar3 = QNetworkProxy::port();
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1001bfe39;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001bfe39:
  uVar8 = uVar4 ^ uVar8 ^ (uint)uVar3;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar8;
  }
LAB_1001bfe49:
  plVar5 = (long *)*param_1;
  plVar6 = param_1;
  if (*(uint *)(plVar5 + 4) != 0) {
    uVar1 = (ulong)uVar8 % (ulong)*(uint *)(plVar5 + 4);
    plVar6 = (long *)(plVar5[1] + uVar1 * 8);
    plVar7 = *(long **)(plVar5[1] + uVar1 * 8);
    while (plVar7 != plVar5) {
      if (*(uint *)(plVar7 + 1) == uVar8) {
        cVar2 = QNetworkProxy::operator==(param_2,(QNetworkProxy *)(plVar7 + 2));
        if (cVar2 != '\0') {
          return plVar6;
        }
        plVar5 = (long *)*param_1;
        plVar7 = (long *)*plVar6;
      }
      plVar6 = plVar7;
      plVar7 = (long *)*plVar6;
    }
  }
  return plVar6;
}

