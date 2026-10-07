
void FUN_1000792a0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  CVmConfiguration *this;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long *local_480;
  QString local_478;
  QArrayData *local_470;
  QArrayData *local_468;
  QArrayData *local_460;
  QArrayData *local_458;
  QArrayData *local_450;
  CVmEvent local_448 [16];
  int local_438;
  long local_348;
  CVmConfiguration local_340 [16];
  CBaseNode local_330 [8];
  int local_328;
  CVmConfiguration local_248 [16];
  CBaseNode local_238 [8];
  int local_230;
  undefined1 local_149;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [263];
  undefined1 local_31;
  
  local_140 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,0x186b5,&local_140);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007935b;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10007935b:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100079391;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100079391:
  local_149 = 0;
  CVmConfiguration::CVmConfiguration(local_248);
  CVmConfiguration::CVmConfiguration(local_340);
  FUN_10011a560(&local_348,param_2);
  cVar2 = (**(code **)(**(long **)(local_348 + 0x10) + 0x10))();
  if (cVar2 == '\0') {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  uVar8 = 0;
  if (local_348 != 0) {
    uVar8 = *(undefined8 *)(local_348 + 0x10);
  }
  FUN_10011ce90(&local_450,uVar8);
  CVmEvent::CVmEvent(local_448,(QTypedArrayData<unsigned_short> *)&local_450);
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_31 = *(int *)local_450 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100079442;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_100079442:
  if (local_438 < 0) {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  local_458 = (QArrayData *)QString::fromAscii_helper("vm_cfg",6);
  lVar5 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_448);
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      local_31 = *(int *)local_458 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000794b3;
    }
    QArrayData::deallocate(local_458,2,8);
  }
LAB_1000794b3:
  if (lVar5 == 0) {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  CVmEventParameter::getParamValue();
  CBaseNode::fromString
            (local_238,(QTypedArrayData<unsigned_short> *)&local_460,false,(QString *)0x0,(int *)0x0
             ,(int *)0x0);
  if (*(int *)local_460 != -1) {
    if (*(int *)local_460 != 0) {
      LOCK();
      *(int *)local_460 = *(int *)local_460 + -1;
      local_31 = *(int *)local_460 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007951e;
    }
    QArrayData::deallocate(local_460,2,8);
  }
LAB_10007951e:
  if (local_230 < 0) {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  local_468 = (QArrayData *)QString::fromAscii_helper("vm_cfg_old",10);
  lVar5 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_448);
  if (*(int *)local_468 != -1) {
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_31 = *(int *)local_468 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007958f;
    }
    QArrayData::deallocate(local_468,2,8);
  }
LAB_10007958f:
  if (lVar5 == 0) {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  CVmEventParameter::getParamValue();
  CBaseNode::fromString
            (local_330,(QTypedArrayData<unsigned_short> *)&local_470,false,(QString *)0x0,(int *)0x0
             ,(int *)0x0);
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_31 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000795fa;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_1000795fa:
  if (local_328 < 0) {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000083;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  cVar2 = operator==(&local_478,(QString *)(*(long *)(param_1 + 0x10) + 0x18));
  if (*(int *)local_478.field0_0x0 != -1) {
    if (*(int *)local_478.field0_0x0 != 0) {
      LOCK();
      *(int *)local_478.field0_0x0 = *(int *)local_478.field0_0x0 + -1;
      local_31 = *(int *)local_478.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007966e;
    }
    QArrayData::deallocate((QArrayData *)local_478.field0_0x0,2,8);
  }
LAB_10007966e:
  if (cVar2 == '\0') {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000105;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  local_480 = (long *)*param_2;
  if (local_480 != (long *)0x0) {
    LOCK();
    *(int *)(local_480 + 1) = (int)local_480[1] + 1;
    UNLOCK();
  }
  iVar3 = FUN_1000a1250(uVar8,local_248,local_340,&local_480,&local_149);
  if (local_480 != (long *)0x0) {
    LOCK();
    plVar1 = local_480 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_480 + 0x10))();
    }
  }
  if (iVar3 < 0) {
    local_149 = 0;
    FUN_100076eb0(param_1,param_2,local_138,iVar3);
  }
  cVar2 = FUN_10007a1b0(local_248,param_1 + 0x28);
  if (cVar2 == '\0') {
    cVar2 = FUN_1000777e0(param_1,local_248,10,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    cVar2 = FUN_1000777e0(param_1,local_248,0xb,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    cVar2 = FUN_1000777e0(param_1,local_248,5,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    cVar2 = FUN_1000777e0(param_1,local_248,6,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    cVar2 = FUN_1000777e0(param_1,local_248,3,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    cVar2 = FUN_1000777e0(param_1,local_248,0xc,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    cVar2 = FUN_1000777e0(param_1,local_248,8,local_138);
    if (cVar2 == '\0') {
      uVar4 = CVmEventBase::getEventCode();
      FUN_100076eb0(param_1,param_2,local_138,uVar4);
    }
    iVar3 = FUN_100075b40(param_1,local_248,local_138);
    if (iVar3 < 0) {
      FUN_100076eb0(param_1,param_2,local_138,iVar3);
    }
    FUN_100076010(param_1,param_2,local_248);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    iVar3 = CVmRunTimeOptions::getOptimizePowerConsumptionMode();
    FUN_1000a8e40(uVar8,iVar3 == 0);
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
  }
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
  }
  this = operator_new(0xf8);
  CVmConfiguration::CVmConfiguration(this,local_248);
  *(CVmConfiguration **)(param_1 + 0x120) = this;
  iVar3 = *(int *)(this + 0x18);
  if (iVar3 < 0) {
    (**(code **)(*(long *)this + 0x20))(this);
    *(undefined8 *)(param_1 + 0x120) = 0;
    piVar7 = (int *)___cxa_allocate_exception(4);
    *piVar7 = iVar3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
  }
  puVar6 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar6 = 0x80000291;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar6,PTR_typeinfo_100ba22d8,0);
}

