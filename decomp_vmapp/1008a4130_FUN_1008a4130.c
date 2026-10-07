
undefined8 FUN_1008a4130(undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_2 != (long *)0x0) {
    if (*param_2 == 0) {
      FUN_100880ec0(param_1,"%*sNo Trusted Uses.\n",param_3,"");
    }
    else {
      iVar6 = 0;
      FUN_100880ec0(param_1,"%*sTrusted Uses:\n%*s",param_3,"",param_3 + 2,"");
      iVar1 = FUN_100885600(*param_2);
      if (0 < iVar1) {
        bVar4 = false;
        do {
          if (bVar4) {
            FUN_10087d870(param_1,", ");
          }
          uVar2 = FUN_100885620(*param_2,iVar6);
          FUN_100822110(local_88,0x50,uVar2,0);
          FUN_10087d870(param_1,local_88);
          iVar6 = iVar6 + 1;
          iVar1 = FUN_100885600(*param_2);
          bVar4 = true;
        } while (iVar6 < iVar1);
      }
      FUN_10087d870(param_1,"\n");
    }
    if (param_2[1] == 0) {
      FUN_100880ec0(param_1,"%*sNo Rejected Uses.\n",param_3,"");
    }
    else {
      iVar6 = 0;
      FUN_100880ec0(param_1,"%*sRejected Uses:\n%*s",param_3,"",param_3 + 2,"");
      iVar1 = FUN_100885600(param_2[1]);
      if (0 < iVar1) {
        bVar4 = false;
        do {
          if (bVar4) {
            FUN_10087d870(param_1,", ");
          }
          uVar2 = FUN_100885620(param_2[1],iVar6);
          FUN_100822110(local_88,0x50,uVar2,0);
          FUN_10087d870(param_1,local_88);
          iVar6 = iVar6 + 1;
          iVar1 = FUN_100885600(param_2[1]);
          bVar4 = true;
        } while (iVar6 < iVar1);
      }
      FUN_10087d870(param_1,"\n");
    }
    if (param_2[2] != 0) {
      FUN_100880ec0(param_1,"%*sAlias: %s\n",param_3,"",*(undefined8 *)(param_2[2] + 8));
    }
    if (param_2[3] != 0) {
      lVar7 = 0;
      FUN_100880ec0(param_1,"%*sKey Id: ",param_3);
      piVar3 = (int *)param_2[3];
      if (0 < *piVar3) {
        do {
          pcVar5 = "";
          if ((int)lVar7 != 0) {
            pcVar5 = ":";
          }
          FUN_100880ec0(param_1,"%s%02X",pcVar5,*(undefined1 *)(*(long *)(piVar3 + 2) + lVar7));
          lVar7 = lVar7 + 1;
          piVar3 = (int *)param_2[3];
        } while (lVar7 < *piVar3);
      }
      FUN_10087d780(param_1,"\n",1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

