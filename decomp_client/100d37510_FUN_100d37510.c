
undefined8 FUN_100d37510(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 4) == 6) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if ((byte)(*(char *)(lVar1 + lVar2) - 0x30U) < 10) {
      if ((byte)(*(char *)(lVar2 + 1 + lVar1) - 0x30U) < 10) {
        if ((byte)(*(char *)(lVar2 + 2 + lVar1) - 0x30U) < 10) {
          if ((byte)(*(char *)(lVar2 + 3 + lVar1) - 0x30U) < 10) {
            if ((byte)(*(char *)(lVar2 + 4 + lVar1) - 0x30U) < 10) {
              if ((byte)(*(char *)(lVar2 + 5 + lVar1) - 0x30U) < 10) {
                iVar4 = 2;
                if (*(char *)(lVar1 + lVar2) != *(char *)(lVar1 + 1 + lVar2)) {
                  iVar4 = 1;
                }
                if (*(char *)(lVar1 + 1 + lVar2) == *(char *)(lVar1 + 2 + lVar2)) {
                  uVar5 = iVar4 + 1;
                }
                else {
                  uVar5 = 1;
                }
                if (uVar5 < 3) {
                  if (*(char *)(lVar1 + 2 + lVar2) == *(char *)(lVar1 + 3 + lVar2)) {
                    uVar5 = uVar5 + 1;
                  }
                  else {
                    uVar5 = 1;
                  }
                  if (uVar5 < 3) {
                    if (*(char *)(lVar1 + 3 + lVar2) == *(char *)(lVar1 + 4 + lVar2)) {
                      uVar5 = uVar5 + 1;
                    }
                    else {
                      uVar5 = 1;
                    }
                    if (uVar5 < 3) {
                      if (*(char *)(lVar1 + 4 + lVar2) == *(char *)(lVar1 + 5 + lVar2)) {
                        uVar5 = uVar5 + 1;
                      }
                      else {
                        uVar5 = 1;
                      }
                      if (uVar5 < 3) {
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

