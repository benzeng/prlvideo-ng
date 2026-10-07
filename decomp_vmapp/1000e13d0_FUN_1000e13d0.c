
void FUN_1000e13d0(long *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  if (((param_2 < 4) || (*(byte *)(param_1[1] + 1) <= param_2)) || (*(byte *)(lVar5 + 1) <= param_2)
     ) {
    pcVar7 = "[NativeString] bad offset %x";
  }
  else {
    bVar2 = *(byte *)(lVar5 + (ulong)param_2);
    if (bVar2 != 0) {
      uVar8 = (uint)bVar2;
      FUN_1008e3970("","vm",0,"[NativeString] Looking for string 0x%x:%u ",param_2,bVar2);
      pcVar7 = (char *)((ulong)*(byte *)(lVar5 + 1) + lVar5);
      uVar4 = 1;
      do {
        cVar3 = *pcVar7;
        while (cVar3 != '\0') {
          if (uVar4 == uVar8) {
            FUN_1008e3970("","vm",0,"[NativeString] String 0x%x:%u found: %s",param_2,uVar8,pcVar7);
            lVar5 = param_1[2];
            uVar9 = (ulong)*(byte *)(param_1[1] + (ulong)param_2) - 1;
            uVar6 = (param_1[3] - lVar5 >> 3) * -0x5555555555555555;
            if (uVar6 < uVar9 || uVar6 - uVar9 == 0) {
              std::__vector_base_common<true>::__throw_out_of_range();
              lVar5 = param_1[2];
            }
            std::string::assign((char *)(lVar5 + uVar9 * 0x18));
            return;
          }
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar3 = *pcVar1;
        }
        uVar4 = uVar4 + 1;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
      FUN_1008e3970("","vm",0,"[NativeString] String %u:%u was not found",param_2,uVar8);
      return;
    }
    pcVar7 = "[NativeString] Zero index of string 0x%x";
  }
  FUN_1008e3970("","vm",0,pcVar7,param_2);
  return;
}

