
int FUN_1008b3fc0(undefined8 param_1,char *param_2,char *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  void *ptr;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int local_9c;
  undefined1 local_98 [96];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar9;
  FUN_100889f60(local_98);
  sVar4 = _strlen(param_2);
  iVar2 = FUN_10087d780(param_1,"-----BEGIN ",0xb);
  if (iVar2 == 0xb) {
    iVar2 = FUN_10087d780(param_1,param_2,sVar4 & 0xffffffff);
    if (iVar2 == (int)sVar4) {
      iVar2 = FUN_10087d780(param_1,"-----\n",6);
      if (iVar2 == 6) {
        sVar5 = _strlen(param_3);
        if ((int)sVar5 < 1) {
LAB_1008b40c8:
          ptr = (void *)FUN_10081ddd0(0x2000,"pem_lib.c",0x268);
          uVar6 = 0x41;
          if (ptr != (void *)0x0) {
            iVar8 = 0;
            iVar2 = 0;
            if (0 < (long)param_5) {
              do {
                uVar7 = param_5 & 0xffffffff;
                if (0x1400 < (long)param_5) {
                  uVar7 = 0x1400;
                }
                iVar10 = (int)uVar7;
                FUN_100889f80(local_98,ptr,&local_9c,iVar8 + param_4,uVar7);
                iVar3 = 0;
                if ((local_9c != 0) && (iVar3 = FUN_10087d780(param_1,ptr), iVar3 != local_9c))
                goto LAB_1008b424a;
                iVar2 = iVar2 + iVar3;
                iVar8 = iVar8 + iVar10;
                uVar7 = param_5 - (long)iVar10;
                bVar1 = (long)iVar10 <= (long)param_5;
                param_5 = uVar7;
              } while (uVar7 != 0 && bVar1);
            }
            FUN_10088a1f0(local_98,ptr,&local_9c);
            if ((local_9c < 1) || (iVar8 = FUN_10087d780(param_1,ptr), iVar8 == local_9c)) {
              _OPENSSL_cleanse(ptr,0x2000);
              FUN_10081e1a0(ptr);
              iVar8 = FUN_10087d780(param_1,"-----END ",9);
              if (iVar8 == 9) {
                iVar8 = FUN_10087d780(param_1,param_2,sVar4 & 0xffffffff);
                lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
                if (iVar8 == (int)sVar4) {
                  iVar8 = FUN_10087d780(param_1,"-----\n",6);
                  uVar6 = 7;
                  if (iVar8 == 6) {
                    iVar2 = iVar2 + local_9c;
                    goto LAB_1008b429b;
                  }
                }
                else {
                  uVar6 = 7;
                }
                goto LAB_1008b427c;
              }
            }
            else {
LAB_1008b424a:
              _OPENSSL_cleanse(ptr,0x2000);
              FUN_10081e1a0(ptr);
            }
            uVar6 = 7;
            lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
        }
        else {
          iVar2 = FUN_10087d780(param_1,param_3,sVar5 & 0xffffffff);
          if (iVar2 == (int)sVar5) {
            iVar2 = FUN_10087d780(param_1,"\n",1);
            if (iVar2 == 1) goto LAB_1008b40c8;
            uVar6 = 7;
          }
          else {
            uVar6 = 7;
          }
        }
      }
      else {
        uVar6 = 7;
      }
    }
    else {
      uVar6 = 7;
    }
  }
  else {
    uVar6 = 7;
  }
LAB_1008b427c:
  FUN_100887ce0(9,0x72,uVar6,"pem_lib.c",0x288);
  iVar2 = 0;
LAB_1008b429b:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

