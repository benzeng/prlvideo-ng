
byte FUN_100757370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_4 + 0x38);
  piVar3 = operator_new__((ulong)uVar1 * 0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (piVar3 == (int *)0x0) {
    bVar2 = 0;
    FUN_1008e3970("","dbgdump",0,"Failed to allocate memory for program headers");
  }
  else {
    bVar2 = FUN_100756dc0(param_2,piVar3,(ulong)uVar1 * (ulong)*(ushort *)(param_4 + 0x36),
                          *(undefined8 *)(param_4 + 0x20));
    if (bVar2 == 0) {
      FUN_1008e3970("","dbgdump",0,"Couldn\'t read pheader");
    }
    else if (*(short *)(param_4 + 0x38) != 0) {
      uVar5 = 0;
      piVar4 = piVar3;
      do {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("","dbgdump",3,
                        "%d pheader type %d, off 0x%08llx, vaddr %08llx,paddr %08llx, filesz %08llx, memsz %llx, flags 0x%x, align 0x%llx"
                        ,uVar5 & 0xffffffff,*piVar4,*(undefined8 *)(piVar4 + 2),
                        *(undefined8 *)(piVar4 + 4),*(undefined8 *)(piVar4 + 6),
                        *(undefined8 *)(piVar4 + 8),*(undefined8 *)(piVar4 + 10),piVar4[1],
                        *(undefined8 *)(piVar4 + 0xc));
        }
        if (*piVar4 == 1) {
          bVar2 = FUN_10075a1f0(DAT_1011ccb80,param_2,*(undefined8 *)(piVar4 + 2),
                                *(undefined8 *)(piVar4 + 8));
        }
        else if (*piVar4 == 4) {
          if (*(short *)(param_4 + 0x12) == 3) {
            bVar2 = FUN_10075a2a0(param_1,param_2,param_3,piVar4);
          }
          else {
            bVar2 = FUN_10075a5d0(param_1,param_2,param_3,piVar4);
          }
        }
        if ((bVar2 & 1) == 0) break;
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 0xe;
      } while ((long)uVar5 < (long)(ulong)*(ushort *)(param_4 + 0x38));
    }
    operator_delete__(piVar3);
    bVar2 = bVar2 & 1;
  }
  return bVar2;
}

