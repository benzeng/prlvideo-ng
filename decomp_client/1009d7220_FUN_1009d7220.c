
undefined1 FUN_1009d7220(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 local_58 [4];
  undefined4 local_54;
  string local_50;
  undefined1 local_4f [15];
  undefined1 *local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 == 0) {
    piVar6 = (int *)__dyld_get_image_header(param_2);
    if ((piVar6 == (int *)0x0) || (*piVar6 != -0x1120531)) goto LAB_1009d74f3;
    iVar5 = piVar6[1];
    lVar7 = __dyld_get_image_vmaddr_slide(param_2);
    uVar8 = __dyld_get_image_name(param_2);
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    piVar10 = piVar6 + 8;
    uVar1 = piVar6[4];
    uVar12 = 0xffffffff;
    do {
      uVar12 = uVar12 + 1;
      if (uVar1 <= uVar12) break;
      if ((*piVar10 == 0x19) && (iVar4 = _strcmp((char *)(piVar10 + 2),"__TEXT"), iVar4 == 0)) {
        cVar2 = FUN_1009cf1f0(param_1 + 8,uVar8,0,local_58);
        if (cVar2 == '\0') {
          return 0;
        }
        *param_3 = lVar7 + *(long *)(piVar10 + 6);
        *(int *)(param_3 + 1) = piVar10[8];
        *(undefined4 *)((long)param_3 + 0x14) = local_54;
        uVar3 = FUN_1009d75d0(param_1,param_3,iVar5,uVar8,0);
        return uVar3;
      }
      piVar10 = (int *)((long)piVar10 + (ulong)(uint)piVar10[1]);
    } while (piVar10 != (int *)0x0);
LAB_1009d74ee:
    uVar3 = 1;
  }
  else {
    if ((param_2 < (int)((ulong)(*(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8)) >> 3)) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 8) + (long)param_2 * 8), lVar7 != 0)) {
      param_3[0xd] = 0;
      param_3[0xc] = 0;
      param_3[0xb] = 0;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[8] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      std::string::string(&local_50,(string *)(lVar7 + 0x48));
      puVar11 = local_40;
      if (((byte)local_50 & 1) == 0) {
        puVar11 = local_4f;
      }
      cVar2 = FUN_1009cf1f0(param_1 + 8,puVar11,0,local_38);
      if (cVar2 == '\0') {
        std::string::~string(&local_50);
      }
      else {
        *param_3 = *(long *)(lVar7 + 0x38) + *(long *)(lVar7 + 0x28);
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar7 + 0x30);
        *(undefined4 *)((long)param_3 + 0x14) = local_34;
        if (*(long *)(param_1 + 0x48) == 0) {
          iVar5 = __dyld_image_count();
          if (0 < iVar5) {
            iVar4 = 0;
            do {
              lVar9 = __dyld_get_image_header(iVar4);
              if (*(int *)(lVar9 + 0xc) == 2) goto LAB_1009d7486;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar5);
          }
LAB_1009d7484:
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_1009d19c0();
          if (iVar4 < 0) goto LAB_1009d7484;
        }
LAB_1009d7486:
        if (iVar4 != param_2) {
          *(undefined4 *)(param_3 + 3) = 0xfeef04bd;
          *(byte *)((long)param_3 + 0x1e) = *(byte *)((long)param_3 + 0x1e) | 1;
          uVar1 = *(uint *)(lVar7 + 0x40);
          *(uint *)(param_3 + 4) = uVar1 >> 0x10;
          *(uint *)((long)param_3 + 0x24) =
               uVar1 & 0xff | *(uint *)((long)param_3 + 0x24) | (uVar1 & 0xff00) << 8;
        }
        if (((byte)local_50 & 1) == 0) {
          local_40 = local_4f;
        }
        cVar2 = FUN_1009d75d0(param_1,param_3,*(undefined4 *)(lVar7 + 0x6c),local_40,0);
        std::string::~string(&local_50);
        if (cVar2 != '\0') goto LAB_1009d74ee;
      }
    }
LAB_1009d74f3:
    uVar3 = 0;
  }
  return uVar3;
}

