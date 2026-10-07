
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c3fd0(long param_1,string *param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  string *psVar3;
  string local_50 [24];
  code *local_38;
  
  if (((byte)*param_2 & 1) == 0) {
    psVar3 = param_2 + 1;
  }
  else {
    psVar3 = *(string **)(param_2 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = param_1 + 0x19;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  FUN_1008e3970(((double)*(uint *)(param_1 + 0x30) * _DAT_100b2d9e8) / (double)param_3,"","vm",0,
                "%s%5u (%6.3f%%) %s",psVar3,*(uint *)(param_1 + 0x30),lVar2);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    local_38 = FUN_1000c5a40;
    FUN_1000c5ae0(*(undefined8 *)(lVar2 + 8),lVar2,*(undefined8 *)(lVar2 + 0x10),&local_38);
    std::string::append((char *)param_2);
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    if (lVar2 != *(long *)(param_1 + 0x38)) {
      do {
        uVar1 = *(undefined8 *)(lVar2 + 0x10);
        std::string::string(local_50,param_2);
        FUN_1000c3fd0(uVar1,local_50,param_3);
        std::string::~string(local_50);
        lVar2 = *(long *)(lVar2 + 8);
      } while (lVar2 != *(long *)(param_1 + 0x38));
    }
    FUN_100258820();
  }
  return;
}

