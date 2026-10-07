
void FUN_100287160(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  
  (**(code **)(*param_1 + 0x70))();
  plVar1 = param_1 + 0x741a;
  plVar2 = param_1 + 0x741c;
  bVar3 = true;
  bVar4 = false;
  while( true ) {
    if (bVar4) {
      if ((long *)*plVar1 == plVar1) {
        if ((long *)*plVar2 == plVar2) {
          if (param_1[0x7415] == 0) {
            cVar5 = (**(code **)(*param_1 + 0xa8))(param_1);
            if (cVar5 == '\0') {
              bVar6 = FUN_1002583d0(param_1);
              bVar7 = bVar6 ^ 1;
              if ((bVar3) && (bVar6 == 0)) {
                (**(code **)(*param_1 + 0x80))(param_1);
                if ((long *)param_1[0x741a] == plVar1) {
                  if ((long *)*plVar2 == plVar2) {
                    if (param_1[0x7415] == 0) {
                      cVar5 = (**(code **)(*param_1 + 0xa8))(param_1);
                      if (cVar5 == '\0') {
                        bVar7 = FUN_1002583d0(param_1);
                        bVar7 = bVar7 ^ 1;
                      }
                      else {
                        bVar7 = 0;
                      }
                    }
                    else {
                      bVar7 = 0;
                    }
                  }
                  else {
                    bVar7 = 0;
                  }
                }
                else {
                  bVar7 = 0;
                }
                if (bVar7 != 0) {
                  bVar3 = false;
                }
              }
            }
            else {
              bVar7 = 0;
            }
          }
          else {
            bVar7 = 0;
          }
        }
        else {
          bVar7 = 0;
        }
      }
      else {
        bVar7 = 0;
      }
    }
    else {
      bVar7 = 0;
    }
    iVar8 = FUN_1002efb70(param_1[8],bVar7,0xffffffff);
    if (iVar8 == -0xfffc) {
                    /* WARNING: Could not recover jumptable at 0x00010028735b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x68))(param_1);
      return;
    }
    if (iVar8 == -0xfffd) break;
    if (bVar3) goto LAB_1002871e3;
LAB_100287254:
    if (iVar8 == -0xfffe) {
      bVar4 = true;
    }
    else if (iVar8 == 3) {
      FUN_100287480(param_1);
    }
  }
  bVar3 = true;
  bVar4 = false;
LAB_1002871e3:
  lVar9 = FUN_1000b3d20(DAT_1011c3698);
  param_1[0x7422] = lVar9;
  do {
    FUN_100287360(param_1);
    while( true ) {
      cVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
      if (cVar5 != '\0') break;
      FUN_1002ef6b0(param_1[8]);
      cVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
      if (cVar5 == '\0') {
        if (!bVar4) {
          (**(code **)(*param_1 + 0xb8))(param_1);
        }
        goto LAB_100287254;
      }
      FUN_1002ef6d0(param_1[8]);
    }
  } while( true );
}

