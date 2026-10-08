
ulong FUN_100c5f370(long param_1,void *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_100c58810(param_1,0xf);
  uVar2 = 0;
  if (((param_3 != 0) && (param_2 != (void *)0x0)) && (*(int *)(param_1 + 0x18) != 0)) {
    lVar1 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (*(int *)(lVar1 + 8) == 0) {
      lVar8 = *(long *)(lVar1 + 0x10);
      uVar3 = *(ulong *)(lVar1 + 0x20);
      uVar4 = uVar3 - lVar8;
      if (uVar4 == 0) {
        FUN_100c58830(param_1,10);
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (long)param_3;
        if (uVar4 < (ulong)(long)param_3) {
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        while( true ) {
          uVar7 = lVar8 + *(long *)(lVar1 + 0x18);
          uVar5 = uVar3;
          if (uVar7 < uVar3) {
            uVar5 = 0;
          }
          lVar8 = uVar7 - uVar5;
          sVar6 = uVar3 - lVar8;
          if (lVar8 + uVar4 <= uVar3) {
            sVar6 = uVar4;
          }
          _memcpy((void *)(lVar8 + *(long *)(lVar1 + 0x28)),param_2,sVar6);
          lVar8 = *(long *)(lVar1 + 0x10) + sVar6;
          *(long *)(lVar1 + 0x10) = lVar8;
          uVar4 = uVar4 - sVar6;
          if (uVar4 == 0) break;
          param_2 = (void *)((long)param_2 + sVar6);
          uVar3 = *(ulong *)(lVar1 + 0x20);
        }
      }
    }
    else {
      FUN_100c62ee0(0x20,0x71,0x7c,"bss_bio.c",0x168);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

