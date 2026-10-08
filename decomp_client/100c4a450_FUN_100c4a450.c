
ulong FUN_100c4a450(undefined8 param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *local_38;
  
  iVar2 = FUN_100bf7220(*param_2);
  if (iVar2 != 0x390) {
    if (param_3 == 0) {
      iVar2 = FUN_100c58a70(param_1,"\n");
      return (ulong)(0 < iVar2);
    }
    goto LAB_100c4a709;
  }
  plVar3 = (long *)FUN_100c4b1f0(param_2,&local_38);
  if (plVar3 == (long *)0x0) {
    iVar2 = FUN_100c58a70(param_1," (INVALID PSS PARAMETERS)\n");
    bVar1 = 0 < iVar2;
  }
  else {
    iVar2 = FUN_100c58a70(param_1,"\n");
    bVar1 = false;
    if (((0 < iVar2) && (iVar2 = FUN_100c58c20(param_1,param_4,0x80), iVar2 != 0)) &&
       (iVar2 = FUN_100c58a70(param_1,"Hash Algorithm: "), 0 < iVar2)) {
      if ((undefined8 *)*plVar3 == (undefined8 *)0x0) {
        iVar2 = FUN_100c58a70(param_1,"sha1 (default)");
      }
      else {
        iVar2 = FUN_100c74930(param_1,*(undefined8 *)*plVar3);
      }
      if (((0 < iVar2) && (iVar2 = FUN_100c58a70(param_1,"\n"), 0 < iVar2)) &&
         ((iVar2 = FUN_100c58c20(param_1,param_4,0x80), iVar2 != 0 &&
          (iVar2 = FUN_100c58a70(param_1,"Mask Algorithm: "), 0 < iVar2)))) {
        if ((undefined8 *)plVar3[1] == (undefined8 *)0x0) {
          pcVar5 = "mgf1 with sha1 (default)";
LAB_100c4a5fa:
          iVar2 = FUN_100c58a70(param_1,pcVar5);
        }
        else {
          iVar2 = FUN_100c74930(param_1,*(undefined8 *)plVar3[1]);
          if ((iVar2 < 1) || (iVar2 = FUN_100c58a70(param_1," with "), iVar2 < 1))
          goto LAB_100c4a6e0;
          if (local_38 == (undefined8 *)0x0) {
            pcVar5 = "INVALID";
            goto LAB_100c4a5fa;
          }
          iVar2 = FUN_100c74930(param_1,*local_38);
        }
        if (0 < iVar2) {
          FUN_100c58a70(param_1,"\n");
          iVar2 = FUN_100c58c20(param_1,param_4,0x80);
          if ((iVar2 != 0) && (iVar2 = FUN_100c58a70(param_1,"Salt Length: 0x"), 0 < iVar2)) {
            if (plVar3[2] == 0) {
              iVar2 = FUN_100c58a70(param_1,"14 (default)");
            }
            else {
              iVar2 = FUN_100c85590(param_1);
            }
            if (0 < iVar2) {
              FUN_100c58a70(param_1,"\n");
              iVar2 = FUN_100c58c20(param_1,param_4,0x80);
              if ((iVar2 != 0) && (iVar2 = FUN_100c58a70(param_1,"Trailer Field: 0x"), 0 < iVar2)) {
                if (plVar3[3] == 0) {
                  iVar2 = FUN_100c58a70(param_1,"BC (default)");
                }
                else {
                  iVar2 = FUN_100c85590(param_1);
                }
                if (0 < iVar2) {
                  FUN_100c58a70(param_1,"\n");
                  bVar1 = true;
                }
              }
            }
          }
        }
      }
    }
LAB_100c4a6e0:
    FUN_100c49f60(plVar3);
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_100c7ae40();
  }
  uVar4 = 0;
  if ((!bVar1) || (uVar4 = 1, param_3 == 0)) {
    return uVar4;
  }
LAB_100c4a709:
  uVar4 = FUN_100c7eed0(param_1,param_3,param_4);
  return uVar4;
}

