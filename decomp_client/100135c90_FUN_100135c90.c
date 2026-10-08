
bool FUN_100135c90(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = EnumUtils::getOsVersionPriorityIndex(param_1);
  uVar2 = EnumUtils::getOsVersionPriorityIndex(param_2);
  return uVar1 < uVar2;
}

