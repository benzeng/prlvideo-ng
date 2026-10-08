
bool FUN_100135a70(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = EnumUtils::getOsTypePriorityIndex(param_1);
  uVar2 = EnumUtils::getOsTypePriorityIndex(param_2);
  return uVar1 < uVar2;
}

