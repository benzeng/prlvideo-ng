
void FUN_1005303d0(long param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  QString *this;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPathResolverHost",3,"CVMCPathResolver::dataReceived stage 1");
  }
  puVar1 = PTR_shared_null_100ba2188;
  local_38 = PTR_shared_null_100ba2188;
  cVar2 = FUN_10052fc00();
  if (cVar2 == '\0') {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"CVMCPathResolver::dataReceived parse error");
    }
  }
  else {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",3,"CVMCPathResolver::dataReceived stage 2");
    }
    this = operator_new(0x28);
    this->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    this[4].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QString::operator=(this,param_2);
    this[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    this[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    *(undefined4 *)&this[3].field0_0x0 = local_3c;
    *(undefined4 *)((long)&this[3].field0_0x0 + 4) = local_40;
    FUN_10051afa0(this + 4,&local_38);
    FUN_100041750(*(undefined8 *)(param_1 + 0x40),this);
  }
  FUN_100037320(&local_38);
  return;
}

