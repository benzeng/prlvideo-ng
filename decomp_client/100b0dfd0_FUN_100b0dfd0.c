
int FUN_100b0dfd0(undefined8 *param_1,uint param_2,char param_3,long *param_4,long *param_5)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  QArrayData *local_40;
  
  if ((long *)*param_5 != (long *)0x0) {
    (**(code **)(*(long *)*param_5 + 0x10))();
  }
  *param_5 = 0;
  uVar3 = 0xfffffffe;
  if (((param_2 & 0x4000) == 0) && (param_4 != (long *)0x0)) {
    uVar3 = (**(code **)(*param_4 + 0x10))(param_4);
  }
  plVar5 = (long *)FUN_100db2560(uVar3,0);
  if (plVar5 == (long *)0x0) {
    FUN_100df99c0("","dimg",0,"Error creating file abstraction with code 0x%x",0x80000002);
    return -0x7ffffffe;
  }
  uVar7 = 0xa00;
  if (param_3 == '\0') {
    uVar7 = 0;
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,param_2 & 3,~(param_2 >> 2) & 1,uVar7,0);
  cVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
  if (cVar2 != '\0') {
    *param_5 = (long)plVar5;
    return 0;
  }
  iVar4 = (**(code **)(*plVar5 + 0xb0))(plVar5);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pcVar8 = "Open";
  if (param_3 != '\0') {
    pcVar8 = "Create";
  }
  pQVar1 = (QArrayData *)*param_1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","dimg",0,"%sFile(%s) failed!: %d",pcVar8,local_40 + *(long *)(local_40 + 0x10),
                iVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100b0e172;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b0e172:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100b0e1a2;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100b0e1a2:
  if (iVar4 == 0x11) {
    iVar6 = -0x7ffdefee;
  }
  else {
    iVar6 = -0x7ffdefc9;
    if (iVar4 != 0x23) {
      iVar6 = (param_3 == '\0') + 0x80021013;
    }
  }
  return iVar6;
}

