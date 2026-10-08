
undefined8
FUN_1003f7b30(undefined8 param_1,QString *param_2,QString *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_d1;
  QString local_d0;
  QString *local_c8;
  char *local_c0;
  undefined1 *local_b8;
  char *local_b0;
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
  QString *local_38;
  char *local_30;
  
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = SandboxFileAccessHelpers::checkAvailability(param_2,param_3,false,&local_d0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      UNLOCK();
      local_38 = (QString *)CONCAT71(local_38._1_7_,*(int *)local_d0.field0_0x0 != 0);
      if (*(int *)local_d0.field0_0x0 != 0) goto LAB_1003f7ba5;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1003f7ba5:
  if (cVar1 == '\0') {
    local_d1 = 1;
    local_48 = 0;
    uStack_40 = 0;
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
    local_b8 = &local_d1;
    local_b0 = "bool";
    local_c0 = "QString";
    local_30 = "QString";
    local_c8 = param_3;
    local_38 = param_2;
    uVar2 = QMetaObject::invokeMethod
                      (param_1,"checkSandboxFileAccessAvailability",2,0,0,param_6,param_2,"QString",
                       param_3,"QString",local_b8,"bool",0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

