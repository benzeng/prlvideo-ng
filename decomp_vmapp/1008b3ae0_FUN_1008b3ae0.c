
bool FUN_1008b3ae0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  void *ptr;
  undefined8 uVar5;
  size_t sVar6;
  long lVar7;
  bool bVar8;
  void *local_548;
  int local_540;
  int local_53c;
  undefined1 local_538 [16];
  undefined1 local_528 [64];
  undefined1 local_4e8 [1032];
  undefined1 local_e0 [168];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar4 = (char *)0x0;
  if (param_5 == 0) {
LAB_1008b3b37:
    uVar2 = (*param_1)(param_4,0);
    if ((int)uVar2 < 0) {
      FUN_100887ce0(9,0x69,0xd,"pem_lib.c",0x162);
      uVar2 = 0;
    }
    else {
      ptr = (void *)FUN_10081ddd0(uVar2 + 0x14,"pem_lib.c",0x168);
      if (ptr != (void *)0x0) {
        local_548 = ptr;
        local_53c = (*param_1)(param_4,&local_548);
        if (param_5 == 0) {
          local_4e8[0] = 0;
          lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
        else {
          if (param_6 == (undefined1 *)0x0) {
            if (param_8 == (code *)0x0) {
              param_7 = FUN_1008b2650(local_4e8,0x400,1,param_9);
            }
            else {
              param_7 = (*param_8)();
            }
            if (param_7 < 1) {
              FUN_100887ce0(9,0x69,0x6f,"pem_lib.c",0x177);
              bVar8 = false;
              lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
              goto LAB_1008b3c4c;
            }
            param_6 = local_4e8;
          }
          FUN_100886e60(0,ptr,local_53c);
          iVar3 = *(int *)(param_5 + 0xc);
          if (0x10 < iVar3) {
            FUN_10081d560("pem_lib.c",0x181,"enc->iv_len <= (int)sizeof(iv)");
            iVar3 = *(int *)(param_5 + 0xc);
          }
          iVar3 = FUN_100886f90(local_538,iVar3);
          bVar8 = false;
          if (iVar3 < 0) {
            lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1008b3c4c;
          }
          uVar5 = FUN_100891710();
          iVar3 = FUN_10088c1c0(param_5,uVar5,local_538,param_6,param_7,1,local_528,0);
          if (iVar3 == 0) {
            lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
            bVar8 = false;
            goto LAB_1008b3c4c;
          }
          if (param_6 == local_4e8) {
            _OPENSSL_cleanse(local_4e8,0x400);
          }
          sVar6 = _strlen(pcVar4);
          if (0x400 < sVar6 + 0x24 + (long)*(int *)(param_5 + 0xc) * 2) {
            FUN_10081d560("pem_lib.c",399,"strlen(objstr) + 23 + 2 * enc->iv_len + 13 <= sizeof buf"
                         );
          }
          local_4e8[0] = 0;
          FUN_10087d250(local_4e8,"Proc-Type: 4,",0x400);
          FUN_10087d250(local_4e8,"ENCRYPTED",0x400);
          FUN_10087d250(local_4e8,"\n",0x400);
          FUN_1008b27c0(local_4e8,pcVar4,*(undefined4 *)(param_5 + 0xc),local_538);
          FUN_10088ae60(local_e0);
          iVar3 = FUN_10088bc00(local_e0,param_5,0,local_528,local_538);
          if (((iVar3 == 0) ||
              (iVar3 = FUN_10088b440(local_e0,ptr,&local_540,ptr,local_53c), iVar3 == 0)) ||
             (iVar3 = FUN_10088b7e0(local_e0,(long)ptr + (long)local_540,&local_53c), iVar3 == 0)) {
            FUN_10088b320(local_e0);
            lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
            bVar8 = false;
            goto LAB_1008b3c4c;
          }
          FUN_10088b320(local_e0);
          local_53c = local_53c + local_540;
          lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
        local_53c = FUN_1008b3fc0(param_3,param_2,local_4e8,ptr,(long)local_53c);
        bVar8 = 0 < local_53c;
        goto LAB_1008b3c4c;
      }
      FUN_100887ce0(9,0x69,0x41,"pem_lib.c",0x16a);
    }
  }
  else {
    uVar1 = FUN_1008945e0(param_5);
    pcVar4 = (char *)FUN_100821930(uVar1);
    if (pcVar4 != (char *)0x0) goto LAB_1008b3b37;
    FUN_100887ce0(9,0x69,0x71,"pem_lib.c",0x15c);
    uVar2 = 0;
  }
  bVar8 = false;
  ptr = (void *)0x0;
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1008b3c4c:
  _OPENSSL_cleanse(local_528,0x40);
  _OPENSSL_cleanse(local_538,0x10);
  _OPENSSL_cleanse(local_e0,0xa8);
  _OPENSSL_cleanse(local_4e8,0x400);
  if (ptr != (void *)0x0) {
    _OPENSSL_cleanse(ptr,(ulong)uVar2);
    FUN_10081e1a0(ptr);
  }
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8;
}

