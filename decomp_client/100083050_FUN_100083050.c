
void FUN_100083050(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *self;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_R9;
  bool bVar8;
  QString local_100;
  QVariant local_f8;
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_vmUuid_102269b10);
  if (self == (undefined *)0x0) {
    local_d0 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_d0,(ID)self,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  lVar5 = FUN_10007f750(uVar7,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      UNLOCK();
      local_38 = CONCAT71(local_38._1_7_,*(int *)local_d0 != 0);
      if (*(int *)local_d0 != 0) goto LAB_100083117;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100083117:
  if ((lVar5 == 0) || (lVar6 = FUN_10008b940(lVar5), lVar6 == 0)) {
LAB_100083142:
    pcVar2 = *(char **)(lVar1 + 0x30);
    local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QVariant::QVariant(&local_f8,&local_100);
    QObject::setProperty(pcVar2,(QVariant *)"vmUuid");
    QVariant::~QVariant(&local_f8);
    if (*(int *)local_100.field0_0x0 == -1) goto LAB_10008324b;
    local_e8.field0_0x0 = local_100.field0_0x0;
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      bVar8 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      local_38 = CONCAT71(local_38._1_7_,bVar8);
joined_r0x0001000831b3:
      if (bVar8) goto LAB_10008324b;
    }
  }
  else {
    uVar7 = FUN_10008b940(lVar5);
    iVar3 = FUN_10018bce0(uVar7);
    if (iVar3 == 3) goto LAB_100083142;
    pcVar2 = *(char **)(lVar1 + 0x30);
    uVar7 = FUN_10008b940(lVar5);
    FUN_100188480(&local_e8,uVar7);
    QVariant::QVariant(&local_e0,&local_e8);
    QObject::setProperty(pcVar2,(QVariant *)"vmUuid");
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_e8.field0_0x0 == -1) goto LAB_10008324b;
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      bVar8 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      local_38 = CONCAT71(local_38._1_7_,bVar8);
      goto joined_r0x0001000831b3;
    }
  }
  QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
LAB_10008324b:
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(lVar1 + 0x30),"currentContextChanged",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0
             ,0,0,0,0,0,0,0,0,0);
  return;
}

