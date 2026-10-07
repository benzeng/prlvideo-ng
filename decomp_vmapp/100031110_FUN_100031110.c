
bool FUN_100031110(undefined8 param_1,int param_2,short *param_3)

{
  long lVar1;
  short *psVar2;
  bool bVar3;
  
  if ((param_2 - 1U < 0x10) && (param_3 != (short *)0x0)) {
    if (0 < param_2) {
      lVar1 = 0;
      psVar2 = param_3;
      do {
        if (*psVar2 == 0) {
          if (*(int *)(param_3 + lVar1 * 0x10 + 0xc) == 0) {
            if (*(int *)(param_3 + lVar1 * 0x10 + 0xe) == 0) {
              if (param_3[lVar1 * 0x10 + 2] == 0) {
                bVar3 = false;
              }
              else {
                bVar3 = param_3[lVar1 * 0x10 + 3] != 0;
              }
            }
            else {
              bVar3 = false;
            }
          }
          else {
            bVar3 = false;
          }
          if (bVar3 == false) {
            if (0 < DAT_1011b55f8) {
              FUN_1008e3970("DYNRESHOST","vm",1,
                            "Invalid display configuration will be ignored: Primary dsp: [%d;%d] w=%d; h=%d"
                            ,*(int *)(param_3 + lVar1 * 0x10 + 0xc),
                            *(undefined4 *)(param_3 + lVar1 * 0x10 + 0xe),param_3[lVar1 * 0x10 + 2],
                            param_3[lVar1 * 0x10 + 3]);
              return false;
            }
            return false;
          }
          return bVar3;
        }
        lVar1 = lVar1 + 1;
        psVar2 = psVar2 + 0x10;
      } while (lVar1 < param_2);
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("DYNRESHOST","vm",1,
                    "Invalid display configuration will be ignored: Primary display not founded");
    }
  }
  return false;
}

