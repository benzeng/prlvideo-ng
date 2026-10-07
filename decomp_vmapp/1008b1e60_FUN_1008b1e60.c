
long FUN_1008b1e60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  long local_68;
  char *local_60;
  char *local_58;
  undefined1 local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58 = (char *)0x0;
  local_60 = (char *)0x0;
  local_68 = 0;
  lVar3 = param_2;
  if ((param_2 == 0) && (lVar3 = FUN_100884e10(), lVar3 == 0)) {
    FUN_100887ce0(9,0x74,0x41,"pem_info.c",0x6b);
    lVar11 = lVar3;
  }
  else {
    local_88 = (long *)FUN_1008a29d0();
    lVar11 = lVar3;
    if (local_88 != (long *)0x0) {
      iVar1 = FUN_1008b2d70(param_1,&local_58,&local_60,&local_68,&local_78);
      if (iVar1 != 0) {
        do {
          while ((pcVar9 = local_58, iVar1 = _strcmp(local_58,"CERTIFICATE"), plVar10 = local_88,
                 iVar1 != 0 && (iVar1 = _strcmp(pcVar9,"X509 CERTIFICATE"), iVar1 != 0))) {
            iVar1 = _strcmp(pcVar9,"TRUSTED CERTIFICATE");
            if (iVar1 == 0) {
              if (*local_88 == 0) {
                iVar1 = 0;
                pcVar8 = FUN_1008a1880;
                goto LAB_1008b21c0;
              }
            }
            else {
              iVar1 = _strcmp(pcVar9,"X509 CRL");
              if (iVar1 == 0) {
                if (local_88[1] == 0) {
                  iVar1 = 0;
                  pcVar8 = FUN_1008a2040;
                  plVar10 = local_88 + 1;
                  goto LAB_1008b21c0;
                }
              }
              else {
                iVar1 = _strcmp(pcVar9,"RSA PRIVATE KEY");
                if (iVar1 == 0) {
                  if (local_88[2] == 0) {
                    local_88[7] = 0;
                    *(undefined4 *)(local_88 + 6) = 0;
                    lVar4 = FUN_1008aabb0();
                    pcVar9 = local_60;
                    local_88[2] = lVar4;
                    if (lVar4 != 0) {
                      sVar5 = _strlen(local_60);
                      if ((int)sVar5 < 0xb) {
                        iVar1 = 6;
                        pcVar8 = FUN_10086ed80;
                        plVar10 = (long *)(lVar4 + 0x18);
                        goto LAB_1008b21c0;
                      }
LAB_1008b2142:
                      iVar1 = FUN_1008b3580(pcVar9,local_88 + 3);
                      if (iVar1 != 0) {
                        local_88[7] = local_68;
                        *(undefined4 *)(local_88 + 6) = local_78;
                        local_68 = 0;
                        goto LAB_1008b2246;
                      }
                    }
                    goto LAB_1008b234a;
                  }
                }
                else {
                  iVar1 = _strcmp(pcVar9,"DSA PRIVATE KEY");
                  if (iVar1 == 0) {
                    if (local_88[2] == 0) {
                      local_88[7] = 0;
                      *(undefined4 *)(local_88 + 6) = 0;
                      lVar4 = FUN_1008aabb0();
                      pcVar9 = local_60;
                      local_88[2] = lVar4;
                      if (lVar4 != 0) {
                        sVar5 = _strlen(local_60);
                        if (10 < (int)sVar5) goto LAB_1008b2142;
                        iVar1 = 0x74;
                        pcVar8 = FUN_1008726c0;
                        plVar10 = (long *)(lVar4 + 0x18);
                        goto LAB_1008b21c0;
                      }
                      goto LAB_1008b234a;
                    }
                  }
                  else {
                    iVar1 = _strcmp(pcVar9,"EC PRIVATE KEY");
                    if (iVar1 != 0) goto LAB_1008b2246;
                    if (local_88[2] == 0) {
                      local_88[7] = 0;
                      *(undefined4 *)(local_88 + 6) = 0;
                      lVar4 = FUN_1008aabb0();
                      pcVar9 = local_60;
                      local_88[2] = lVar4;
                      if (lVar4 != 0) {
                        sVar5 = _strlen(local_60);
                        if (10 < (int)sVar5) goto LAB_1008b2142;
                        iVar1 = 0x198;
                        pcVar8 = FUN_100863430;
                        plVar10 = (long *)(lVar4 + 0x18);
                        goto LAB_1008b21c0;
                      }
                      goto LAB_1008b234a;
                    }
                  }
                }
              }
            }
LAB_1008b2179:
            iVar1 = FUN_1008852e0(lVar3,local_88);
            if (iVar1 == 0) goto LAB_1008b234a;
            local_88 = (long *)FUN_1008a29d0();
            if (local_88 == (long *)0x0) goto LAB_1008b2359;
          }
          if (*local_88 != 0) goto LAB_1008b2179;
          iVar1 = 0;
          pcVar8 = FUN_1008a1790;
LAB_1008b21c0:
          iVar2 = FUN_1008b3580(local_60,local_50);
          if ((iVar2 == 0) ||
             (iVar2 = FUN_1008b3800(local_50,local_68,&local_78,param_3,param_4), iVar2 == 0))
          goto LAB_1008b234a;
          local_70 = local_68;
          if (iVar1 == 0) {
            lVar4 = (*pcVar8)(plVar10,&local_70,CONCAT44(uStack_74,local_78));
            if (lVar4 == 0) {
              FUN_100887ce0(9,0x74,0xd,"pem_info.c",0xf9);
              goto LAB_1008b234a;
            }
          }
          else {
            lVar4 = FUN_1008a2c80(iVar1,plVar10,&local_70,CONCAT44(uStack_74,local_78));
            if (lVar4 == 0) {
              FUN_100887ce0(9,0x74,0xd,"pem_info.c",0xf5);
              goto LAB_1008b234a;
            }
          }
LAB_1008b2246:
          if (local_58 != (char *)0x0) {
            FUN_10081e1a0();
          }
          if (local_60 != (char *)0x0) {
            FUN_10081e1a0();
          }
          if (local_68 != 0) {
            FUN_10081e1a0();
          }
          local_58 = (char *)0x0;
          local_60 = (char *)0x0;
          local_68 = 0;
          iVar1 = FUN_1008b2d70(param_1,&local_58,&local_60,&local_68,&local_78);
        } while (iVar1 != 0);
      }
      uVar6 = FUN_1008885f0();
      if ((uVar6 & 0xfff) == 0x6c) {
        FUN_100888070();
        if ((((*local_88 == 0) && (local_88[1] == 0)) && (local_88[2] == 0)) && (local_88[7] == 0))
        {
          FUN_1008a2a50(local_88);
        }
        else {
          iVar1 = FUN_1008852e0(lVar3,local_88);
          if (iVar1 == 0) goto LAB_1008b234a;
        }
        lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_1008b23ab;
      }
      if (local_88 != (long *)0x0) {
LAB_1008b234a:
        FUN_1008a2a50(local_88);
      }
    }
  }
LAB_1008b2359:
  iVar1 = FUN_100885600(lVar11);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar7 = FUN_100885620(lVar11,iVar1);
      FUN_1008a2a50(uVar7);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(lVar11);
    } while (iVar1 < iVar2);
  }
  lVar3 = 0;
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (lVar11 != param_2) {
    FUN_100884dd0(lVar11);
    lVar3 = 0;
  }
LAB_1008b23ab:
  if (local_58 != (char *)0x0) {
    FUN_10081e1a0();
  }
  if (local_60 != (char *)0x0) {
    FUN_10081e1a0();
  }
  if (local_68 != 0) {
    FUN_10081e1a0();
  }
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

