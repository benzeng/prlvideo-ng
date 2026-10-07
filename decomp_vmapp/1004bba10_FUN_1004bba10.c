
void FUN_1004bba10(long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong in_stack_ffffffffffffff50;
  double in_stack_ffffffffffffff60;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  undefined1 local_50 [16];
  double local_40;
  long local_38;
  
  if (((param_7 != 0) && (param_8 != 0)) && (*(char *)((long)param_1 + 0x24a) != '\0')) {
    lVar7 = *param_1;
    lVar8 = (param_2 & 0xffffffff) * 0x8f0;
    iVar1 = *(int *)(lVar7 + 0x980 + lVar8);
    iVar2 = *(int *)(lVar7 + 0x984 + lVar8);
    local_38 = FUN_1004bbdf0(param_1,param_2,param_3,*(undefined4 *)(lVar7 + 0x938 + lVar8),
                             *(undefined4 *)(lVar7 + 0x93c + lVar8),0x20,param_4);
    if (local_38 != 0) {
      local_58 = (double)((float)iVar1 + (float)param_5);
      local_40 = (double)param_8;
      local_50._8_4_ = SUB84((double)param_7,0);
      local_50._0_8_ = (double)((float)iVar2 + (float)param_6);
      local_50._12_4_ = (int)((ulong)(double)param_7 >> 0x20);
      local_60 = 0;
      (*DAT_1011ccc50)(&local_58,&local_60);
      lVar7 = param_1[2];
      lVar8 = *(long *)(lVar7 + 0x1018);
      if (lVar8 != 0) {
        in_stack_ffffffffffffff50 = local_50._0_8_;
        in_stack_ffffffffffffff60 = local_40;
        FUN_1004bb590(param_1,lVar8,param_2 & 0xffffffff,&local_60,&local_38);
        lVar7 = param_1[2];
      }
      if (*(int *)(lVar7 + 0x1028) != 0) {
        lVar9 = 0;
        do {
          cVar4 = (*DAT_1011ccc60)(local_60);
          if (cVar4 != '\0') break;
          lVar5 = FUN_1004b9ef0(param_1[2],*(undefined4 *)(*(long *)(lVar7 + 0x1020) + lVar9 * 4));
          if (lVar5 == 0) {
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("CHRSERVER","ChrToolSrv",3,
                            "Ignore drawing wnd=0x%08X() No information about window",
                            *(undefined4 *)(*(long *)(lVar7 + 0x1020) + lVar9 * 4));
            }
          }
          else {
            uVar6 = FUN_1004b9f40(param_1[2],lVar5);
            if (((*(char *)(lVar5 + 0x20) == '\0') && ((*(uint *)(lVar5 + 0x48) & 0x41) == 0)) &&
               (((*(uint *)(lVar5 + 0x48) & 0x20) == 0 || (*(long *)(lVar5 + 0x70) == 0)))) {
              if (((*(int *)(lVar5 + 0x28) == 0) &&
                  ((lVar8 == 0 || (*(char *)(lVar5 + 0x24) != '\0')))) &&
                 (*(char *)(lVar5 + 0x34) != '\0')) {
                if (*(char *)(lVar5 + 0x23) != '\0') {
                  FUN_1004b7870(param_1[1],*(undefined4 *)(lVar5 + 0x38));
                  *(undefined1 *)(lVar5 + 0x23) = 0;
                }
                in_stack_ffffffffffffff50 = local_50._0_8_;
                in_stack_ffffffffffffff60 = local_40;
                cVar4 = FUN_1004bb590(param_1,lVar5,(int)param_2,&local_60,&local_38);
                if (cVar4 == '\0') goto LAB_1004bbc6f;
                local_70 = 0;
                (*DAT_1011ccc80)(local_60,uVar6,&local_70);
                (*DAT_1011ccc48)(local_60);
                local_60 = local_70;
              }
              else {
                local_68 = 0;
                (*DAT_1011ccc80)(local_60,uVar6,&local_68);
                (*DAT_1011ccc48)(local_60);
                local_60 = local_68;
              }
              (*DAT_1011ccc48)(uVar6);
            }
            else {
              if (2 < DAT_1011b55f8) {
                uVar3 = *(uint *)(lVar5 + 0x48);
                in_stack_ffffffffffffff60 =
                     (double)(CONCAT44((int)((ulong)in_stack_ffffffffffffff60 >> 0x20),uVar3) &
                             0xffffffff00000001);
                in_stack_ffffffffffffff50 =
                     CONCAT44((int)(in_stack_ffffffffffffff50 >> 0x20),uVar3 >> 5) &
                     0xffffffff00000001;
                FUN_1008e3970("CHRSERVER","ChrToolSrv",3,
                              "Ignore drawing wnd 0x%08X [glEnable=%i/%p; layered=%d; \t\t\t\tbitmap=%p] minimized=%d; hidden=%d"
                              ,*(undefined4 *)(*(long *)(lVar7 + 0x1020) + lVar9 * 4),
                              *(char *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x18),
                              in_stack_ffffffffffffff50,*(undefined8 *)(lVar5 + 0x70),
                              in_stack_ffffffffffffff60,uVar3 >> 6 & 1);
              }
LAB_1004bbc6f:
              (*DAT_1011ccc48)(uVar6);
            }
          }
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < *(uint *)(lVar7 + 0x1028));
      }
      (*DAT_1011ccc48)(local_60);
    }
  }
  return;
}

