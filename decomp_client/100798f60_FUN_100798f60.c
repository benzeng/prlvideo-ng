
void FUN_100798f60(long param_1)

{
  undefined8 uVar1;
  CAppliance local_160 [328];
  
  if (*(int *)(*(long *)(param_1 + 0x40) + 0x160) == 2) {
    uVar1 = FUN_100794960();
    CAppliance::CAppliance(local_160,(CAppliance *)(*(long *)(param_1 + 0x40) + 0x10));
    FUN_100795c60(uVar1,0,local_160);
    CAppliance::~CAppliance(local_160);
  }
  return;
}

