
bool FUN_1008a3b50(undefined8 param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *param_2;
  if (9 < (long)iVar5) {
    pcVar4 = *(char **)(param_2 + 2);
    cVar2 = *pcVar4;
    if ((((((byte)(cVar2 - 0x30U) < 10) && (cVar3 = pcVar4[1], (byte)(cVar3 - 0x30U) < 10)) &&
         ((byte)(pcVar4[2] - 0x30U) < 10)) &&
        (((((byte)(pcVar4[3] - 0x30U) < 10 && ((byte)(pcVar4[4] - 0x30U) < 10)) &&
          (((byte)(pcVar4[5] - 0x30U) < 10 &&
           (((byte)(pcVar4[6] - 0x30U) < 10 && ((byte)(pcVar4[7] - 0x30U) < 10)))))) &&
         ((byte)(pcVar4[8] - 0x30U) < 10)))) && ((byte)(pcVar4[9] - 0x30U) < 10)) {
      iVar8 = cVar3 + -0x210 + cVar2 * 10;
      iVar7 = cVar3 + -0x1ac + cVar2 * 10;
      if (0x31 < iVar8) {
        iVar7 = iVar8;
      }
      uVar1 = pcVar4[3] + -0x211 + pcVar4[2] * 10;
      if (uVar1 < 0xc) {
        iVar8 = 0;
        if (((0xb < iVar5) && ((byte)(pcVar4[10] - 0x30U) < 10)) &&
           ((byte)(pcVar4[0xb] - 0x30U) < 10)) {
          iVar8 = pcVar4[0xb] + -0x210 + pcVar4[10] * 10;
        }
        if (pcVar4[(long)iVar5 + -1] == 'Z') {
          pcVar6 = " GMT";
        }
        else {
          pcVar6 = "";
        }
        iVar5 = FUN_100880ec0(param_1,"%s %2d %02d:%02d:%02d %d%s",
                              (&PTR_s_Jan_100be2040)[(int)uVar1],pcVar4[5] + -0x210 + pcVar4[4] * 10
                              ,pcVar4[7] + -0x210 + pcVar4[6] * 10,
                              pcVar4[9] + -0x210 + pcVar4[8] * 10,iVar8,iVar7 + 0x76c,pcVar6);
        return 0 < iVar5;
      }
    }
  }
  FUN_10087d780(param_1,"Bad time value",0xe);
  return false;
}

