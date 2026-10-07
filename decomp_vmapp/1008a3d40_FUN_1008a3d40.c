
bool FUN_1008a3d40(undefined8 param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar3 = *param_2;
  lVar5 = (long)iVar3;
  if (0xb < lVar5) {
    pcVar2 = *(char **)(param_2 + 2);
    if ((((((byte)(*pcVar2 - 0x30U) < 10) && ((byte)(pcVar2[1] - 0x30U) < 10)) &&
         ((byte)(pcVar2[2] - 0x30U) < 10)) &&
        (((((byte)(pcVar2[3] - 0x30U) < 10 && ((byte)(pcVar2[4] - 0x30U) < 10)) &&
          (((byte)(pcVar2[5] - 0x30U) < 10 &&
           (((byte)(pcVar2[6] - 0x30U) < 10 && ((byte)(pcVar2[7] - 0x30U) < 10)))))) &&
         ((byte)(pcVar2[8] - 0x30U) < 10)))) &&
       ((((byte)(pcVar2[9] - 0x30U) < 10 && ((byte)(pcVar2[10] - 0x30U) < 10)) &&
        ((byte)(pcVar2[0xb] - 0x30U) < 10)))) {
      uVar1 = pcVar2[5] + -0x211 + pcVar2[4] * 10;
      if (uVar1 < 0xc) {
        iVar8 = 0;
        pcVar9 = (char *)0x0;
        iVar7 = 0;
        if (0xd < iVar3) {
          iVar8 = 0;
          pcVar9 = (char *)0x0;
          iVar7 = 0;
          if ((byte)(pcVar2[0xc] - 0x30U) < 10) {
            iVar8 = 0;
            pcVar9 = (char *)0x0;
            iVar7 = 0;
            if ((byte)(pcVar2[0xd] - 0x30U) < 10) {
              iVar8 = pcVar2[0xd] + -0x210 + pcVar2[0xc] * 10;
              pcVar9 = (char *)0x0;
              if (iVar3 < 0xf) {
                iVar7 = 0;
              }
              else {
                pcVar9 = (char *)0x0;
                if (pcVar2[0xe] == '.') {
                  pcVar9 = pcVar2 + 0xe;
                  iVar7 = 1;
                  if (0xf < iVar3) {
                    lVar4 = 0xf;
                    do {
                      iVar7 = (int)lVar4;
                      if (9 < (byte)(pcVar2[lVar4] - 0x30U)) {
                        iVar7 = iVar7 + -0xe;
                        goto LAB_1008a3f65;
                      }
                      lVar4 = lVar4 + 1;
                    } while (lVar4 < lVar5);
                    iVar7 = iVar7 + -0xd;
                  }
                }
                else {
                  iVar7 = 0;
                }
              }
            }
          }
        }
LAB_1008a3f65:
        if (pcVar2[lVar5 + -1] == 'Z') {
          pcVar6 = " GMT";
        }
        else {
          pcVar6 = "";
        }
        iVar3 = FUN_100880ec0(param_1,"%s %2d %02d:%02d:%02d%.*s %d%s",
                              (&PTR_s_Jan_100be2040)[(int)uVar1],pcVar2[7] + -0x210 + pcVar2[6] * 10
                              ,pcVar2[9] + -0x210 + pcVar2[8] * 10,
                              pcVar2[0xb] + -0x210 + pcVar2[10] * 10,iVar8,iVar7,pcVar9,
                              pcVar2[3] + -0xd050 +
                              pcVar2[1] * 100 + *pcVar2 * 1000 + pcVar2[2] * 10,pcVar6);
        return 0 < iVar3;
      }
    }
  }
  FUN_10087d780(param_1,"Bad time value",0xe);
  return false;
}

