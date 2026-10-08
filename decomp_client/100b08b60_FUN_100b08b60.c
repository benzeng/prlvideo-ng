
undefined1 FUN_100b08b60(QString *param_1,undefined8 param_2)

{
  QString *this;
  char cVar1;
  QArrayData *pQVar2;
  undefined1 uVar3;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  FUN_100dd8550(local_30,param_2,0);
  cVar1 = FUN_100dd86a0(local_30);
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_100df99c0("","pvsHostInfo",0,"Error creating HDD properties");
    goto LAB_100b08dd4;
  }
  this = param_1 + 1;
  cVar1 = FUN_100dd87a0(local_30,&cf_BSDName,this);
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'BSD Name\' property");
    goto LAB_100b08dd4;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(" (%1)",5);
  QString::arg(&local_38,&local_40,this,0,0x20);
  QString::append(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b08c16;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b08c16:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b08c46;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b08c46:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_21 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
  QString::append(&local_48);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b08cb9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100b08cb9:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b08ce6;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b08ce6:
  cVar1 = FUN_100dd8920(local_30,&cf_Ejectable,(undefined1 *)((long)&param_1[2].field0_0x0 + 4));
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'Ejectable\' property");
  }
  else if ((*(char *)((long)&param_1[2].field0_0x0 + 5) == '\0') &&
          (cVar1 = FUN_100dd8920(local_30,&cf_Removable,
                                 (undefined1 *)((long)&param_1[2].field0_0x0 + 5)), cVar1 == '\0'))
  {
    uVar3 = 0;
    FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'Removable\' property");
  }
  else {
    param_1[3].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    cVar1 = FUN_100dd8900(local_30,&cf_Size,param_1 + 3);
    uVar3 = 1;
    if (cVar1 == '\0') {
      uVar3 = 0;
      FUN_100df99c0("","pvsHostInfo",0,"Failed to read \'IOMediaSize\' property");
    }
  }
LAB_100b08dd4:
  FUN_100dd86b0(local_30);
  return uVar3;
}

