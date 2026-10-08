
undefined8 * FUN_10044e9c0(undefined8 *param_1,long param_2,char *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  QVariant local_68;
  QArrayData *local_58;
  undefined1 local_50 [12];
  QVariant local_40;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  if (param_2 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    iVar3 = *(int *)puVar1;
    if (iVar3 + 1U < 2) goto LAB_10044ebbf;
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
  }
  else {
    QObject::property((char *)&local_40);
    cVar2 = QVariant::canConvert((int)&local_40);
    if (cVar2 == '\0') {
      iVar3 = QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
      if (iVar3 == -1) {
        FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","enumIdx != -1",
                      "ConfigEditor/Pages/CVmEdAbstractPage.cpp",0x1b0,"enumBitArrayFromProperty");
      }
      local_50 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
      iVar3 = -1;
      if (param_3 != (char *)0x0) {
        sVar4 = _strlen(param_3);
        iVar3 = (int)sVar4;
      }
      local_58 = (QArrayData *)QString::fromAscii_helper(param_3,iVar3);
      FUN_100a1fb80(param_2,local_50,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10044ead7;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_10044ead7:
    QObject::property((char *)&local_68);
    QVariant::operator=(&local_40,&local_68);
    QVariant::~QVariant(&local_68);
    if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
LAB_10044eb33:
      puVar1 = PTR_shared_null_1021e1288;
      *param_1 = PTR_shared_null_1021e1288;
      if (1 < *(int *)puVar1 + 1U) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + 1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
      }
    }
    else {
      cVar2 = QVariant::canConvert((int)&local_40);
      if (cVar2 == '\0') goto LAB_10044eb33;
      QVariant::toBitArray();
    }
    QVariant::~QVariant(&local_40);
  }
  iVar3 = *(int *)PTR_shared_null_1021e1288;
LAB_10044ebbf:
  puVar1 = PTR_shared_null_1021e1288;
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,1,8);
  }
  return param_1;
}

