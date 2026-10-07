
void FUN_1006588e0(void)

{
  long lVar1;
  QString QVar2;
  int iVar3;
  int iVar4;
  QString QVar5;
  size_t sVar6;
  int *piVar7;
  undefined1 local_270 [8];
  QArrayData *local_268;
  QString local_260;
  size_t local_258;
  undefined1 local_24c [4];
  QString local_248;
  undefined1 local_239;
  char local_238 [512];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)CHostHardwareInfoBase::getCpu();
  if (QVar5.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    if (lVar1 == local_38) {
      FUN_1008e3970("","pvsHostInfo",0,"CDspHostInfo::GetCpu() : CHwCpu is NULL!");
      return;
    }
    goto LAB_100658c6c;
  }
  local_248.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_258 = 0x200;
  iVar3 = _sysctlbyname("machdep.cpu.brand_string",local_238,&local_258,(void *)0x0,0);
  if (iVar3 != 0) {
    ___error();
    FUN_1008e3970("","pvsHostInfo",0);
  }
  sVar6 = _strlen(local_238);
  local_268 = (QArrayData *)QString::fromAscii_helper(local_238,(int)sVar6);
  QString::simplified();
  QString::operator=(&local_248,&local_260);
  if (*(int *)local_260.field0_0x0 != -1) {
    if (*(int *)local_260.field0_0x0 != 0) {
      LOCK();
      *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
      local_239 = *(int *)local_260.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_1006589fc;
    }
    QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
  }
LAB_1006589fc:
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_239 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_100658a38;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100658a38:
  iVar3 = FUN_100646a60();
  local_258 = 4;
  iVar4 = _sysctlbyname("hw.ncpu",local_24c,&local_258,(void *)0x0,0);
  if (iVar4 != 0) {
    ___error();
    FUN_1008e3970("","pvsHostInfo",0);
  }
  local_258 = 8;
  iVar4 = _sysctlbyname("hw.cpufrequency",local_270,&local_258,(void *)0x0,0);
  if (iVar4 != 0) {
    piVar7 = ___error();
    FUN_1008e3970("","pvsHostInfo",0,"hw.cpufrequency error = %d",*piVar7);
  }
  QVar2.field0_0x0 = local_248.field0_0x0;
  if (1 < *(int *)local_248.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + 1;
    local_239 = *(int *)local_248.field0_0x0 != 0;
    UNLOCK();
  }
  CHwCpu::setModel(QVar5);
  if (*(int *)QVar2.field0_0x0 != -1) {
    if (*(int *)QVar2.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar2.field0_0x0 = *(int *)QVar2.field0_0x0 + -1;
      local_239 = *(int *)QVar2.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_239) goto LAB_100658b73;
    }
    QArrayData::deallocate((QArrayData *)QVar2.field0_0x0,2,8);
  }
LAB_100658b73:
  CHwCpu::setNumber((uint)QVar5.field0_0x0);
  CHwCpu::setMode(QVar5.field0_0x0,iVar3 != 0);
  CHwCpu::setSpeed((uint)QVar5.field0_0x0);
  if (*(int *)local_248.field0_0x0 != -1) {
    if (*(int *)local_248.field0_0x0 != 0) {
      LOCK();
      *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
      local_238[0] = *(int *)local_248.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_238[0]) goto LAB_100658bd4;
    }
    QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
  }
LAB_100658bd4:
  if (lVar1 == local_38) {
    return;
  }
LAB_100658c6c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

