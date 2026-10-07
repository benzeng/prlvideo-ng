
void FUN_1002edcf0(int param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  ushort *puVar11;
  ushort uVar12;
  ushort *in_stack_ffffffffffffff90;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (0 < DAT_1011c568c) {
    in_stack_ffffffffffffff90 = param_2;
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[L2CAP_DYN_CHN%04x(psm:%04x)] (msg:%d, ctx:%p, data:%p:%ld, err:%08x, host_dev:%p, host_chn:%p)"
                  ,param_2[1],param_2[2],param_1,param_2,param_3,param_3[1],
                  *(undefined4 *)(param_3 + 2),puVar3[1],*(undefined8 *)(param_2 + 4));
  }
  if (param_1 == 2) {
    uVar1 = *param_2;
    uVar4 = param_3[1];
    uVar12 = *(ushort *)((long)puVar3 + 0x16);
    uVar5 = (uint)uVar4 & 0xffff;
    iVar10 = uVar5 + 4;
    lVar8 = (**(code **)(*(long *)*puVar3 + 0x60))((long *)*puVar3,0x82,uVar5 + 8,FUN_1002df330,0);
    if (lVar8 == 0) {
      if (-1 < DAT_1011c568c) {
LAB_1002ee168:
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",
                      uVar12,iVar10);
        return;
      }
    }
    else {
      puVar11 = *(ushort **)(lVar8 + 0x10);
      *puVar11 = uVar12 & 0xfff | 0x2000;
      puVar11[1] = (ushort)iVar10;
      if (puVar11 != (ushort *)0x0) {
        puVar11[3] = uVar1;
        puVar11[2] = (ushort)uVar4;
        _memcpy(puVar11 + 4,(void *)*param_3,param_3[1]);
        FUN_1002edb10(puVar3,puVar11);
        return;
      }
    }
  }
  else if (param_1 == 1) {
    do {
      iVar2 = *(int *)((long)puVar3 + 0x1c);
      iVar10 = iVar2 + 1;
      if (iVar2 == 0xffff) {
        iVar10 = 1;
      }
      LOCK();
      iVar7 = *(int *)((long)puVar3 + 0x1c);
      if (iVar2 == iVar7) {
        *(int *)((long)puVar3 + 0x1c) = iVar10;
        iVar7 = iVar2;
      }
      UNLOCK();
    } while (iVar7 != iVar2);
    uVar12 = *(ushort *)((long)puVar3 + 0x16);
    lVar8 = (**(code **)(*(long *)*puVar3 + 0x60))((long *)*puVar3,0x82,0x10,FUN_1002df330,0);
    if (lVar8 == 0) {
      if (-1 < DAT_1011c568c) {
        iVar10 = 0xc;
        goto LAB_1002ee168;
      }
    }
    else {
      puVar11 = *(ushort **)(lVar8 + 0x10);
      *puVar11 = uVar12 & 0xfff | 0x2000;
      puVar11[1] = 0xc;
      if (puVar11 != (ushort *)0x0) {
        puVar11[3] = 1;
        puVar11[2] = 8;
        *(undefined1 *)(puVar11 + 4) = 6;
        *(char *)((long)puVar11 + 9) = (char)iVar2;
        puVar11[5] = 4;
        puVar11[6] = *param_2;
        puVar11[7] = param_2[1];
        pcVar9 = "Disconnect Request";
LAB_1002ede31:
        FUN_1002edbe0(puVar3,puVar11,pcVar9);
        return;
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = param_2[3];
    uVar12 = *(ushort *)((long)puVar3 + 0x16);
    lVar8 = (**(code **)(*(long *)*puVar3 + 0x60))((long *)*puVar3,0x82,0x14,FUN_1002df330,0);
    if (lVar8 == 0) {
      if (-1 < DAT_1011c568c) {
        iVar10 = 0x10;
        goto LAB_1002ee168;
      }
    }
    else {
      puVar11 = *(ushort **)(lVar8 + 0x10);
      *puVar11 = uVar12 & 0xfff | 0x2000;
      puVar11[1] = 0x10;
      if (puVar11 != (ushort *)0x0) {
        puVar11[3] = 1;
        puVar11[2] = 0xc;
        *(undefined1 *)(puVar11 + 4) = 3;
        *(char *)((long)puVar11 + 9) = (char)uVar1;
        puVar11[5] = 8;
        uVar12 = param_2[1];
        puVar11[6] = uVar12;
        uVar1 = *param_2;
        puVar11[7] = uVar1;
        uVar6 = 4;
        if (*(int *)(param_3 + 2) == 0) {
          uVar6 = 0;
        }
        puVar11[8] = uVar6;
        puVar11[9] = 0;
        if (0 < DAT_1011c568c) {
          FUN_1008e3970(&DAT_100b392f0,"USB",0,
                        "[L2CAP-C-FRAME-CON-RES] dcid: 0x%04x, scid: 0x%04x, result: 0x%04x, status: 0x%04x"
                        ,uVar12,uVar1,uVar6,(ulong)in_stack_ffffffffffffff90 & 0xffffffff00000000);
        }
        FUN_1002edbe0(puVar3,puVar11,"Connection Success");
        if (*(int *)(param_3 + 2) == 0) {
          do {
            iVar2 = *(int *)((long)puVar3 + 0x1c);
            iVar10 = iVar2 + 1;
            if (iVar2 == 0xffff) {
              iVar10 = 1;
            }
            LOCK();
            iVar7 = *(int *)((long)puVar3 + 0x1c);
            if (iVar2 == iVar7) {
              *(int *)((long)puVar3 + 0x1c) = iVar10;
              iVar7 = iVar2;
            }
            UNLOCK();
          } while (iVar7 != iVar2);
          uVar12 = *(ushort *)((long)puVar3 + 0x16);
          lVar8 = (**(code **)(*(long *)*puVar3 + 0x60))((long *)*puVar3,0x82,0x10,FUN_1002df330,0);
          if (lVar8 == 0) {
            if (-1 < DAT_1011c568c) {
              iVar10 = 0xc;
              goto LAB_1002ee168;
            }
          }
          else {
            puVar11 = *(ushort **)(lVar8 + 0x10);
            *puVar11 = uVar12 & 0xfff | 0x2000;
            puVar11[1] = 0xc;
            if (puVar11 != (ushort *)0x0) {
              puVar11[3] = 1;
              puVar11[2] = 8;
              *(undefined1 *)(puVar11 + 4) = 4;
              *(char *)((long)puVar11 + 9) = (char)iVar2;
              puVar11[5] = 4;
              uVar12 = *param_2;
              puVar11[6] = uVar12;
              puVar11[7] = 0;
              if (0 < DAT_1011c568c) {
                FUN_1008e3970(&DAT_100b392f0,"USB",0,
                              "[L2CAP-C-FRAME-CFG-REQ] dcid: 0x%04x, flags: 0x04%x",uVar12,0);
              }
              pcVar9 = "Configuration Request";
              goto LAB_1002ede31;
            }
          }
        }
      }
    }
  }
  return;
}

