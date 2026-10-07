
undefined8 FUN_10034cbd0(byte *param_1,long param_2)

{
  int *piVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined8 uVar8;
  bool bVar9;
  
  uVar8 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar8 = 0;
    if (*(byte **)(param_1 + 0x27f0) != (byte *)0x0) {
      pbVar4 = *(byte **)(param_1 + 0x27f0);
      pbVar5 = param_1 + 0x27f0;
      do {
        while (pbVar6 = pbVar4, *(uint *)(param_2 + 8) <= *(uint *)(pbVar6 + 0x20)) {
          pbVar4 = *(byte **)pbVar6;
          pbVar5 = pbVar6;
          if (*(byte **)pbVar6 == (byte *)0x0) goto LAB_10034cc40;
        }
        pbVar3 = pbVar6 + 8;
        pbVar6 = pbVar5;
        pbVar4 = *(byte **)pbVar3;
      } while (*(byte **)pbVar3 != (byte *)0x0);
LAB_10034cc40:
      if ((pbVar6 != param_1 + 0x27f0) && (*(uint *)(pbVar6 + 0x20) <= *(uint *)(param_2 + 8))) {
        pvVar7 = *(void **)(pbVar6 + 0x28);
        if ((*(void **)(param_1 + 0x358) != (void *)0x0) && (*(void **)(param_1 + 0x358) == pvVar7))
        {
          param_1[0x358] = 0;
          param_1[0x359] = 0;
          param_1[0x35a] = 0;
          param_1[0x35b] = 0;
          param_1[0x35c] = 0;
          param_1[0x35d] = 0;
          param_1[0x35e] = 0;
          param_1[0x35f] = 0;
          param_1[0xc] = param_1[0xc] | 1;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x360) != (void *)0x0) && (*(void **)(param_1 + 0x360) == pvVar7))
        {
          param_1[0x360] = 0;
          param_1[0x361] = 0;
          param_1[0x362] = 0;
          param_1[0x363] = 0;
          param_1[0x364] = 0;
          param_1[0x365] = 0;
          param_1[0x366] = 0;
          param_1[0x367] = 0;
          param_1[0xc] = param_1[0xc] | 2;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x368) != (void *)0x0) && (*(void **)(param_1 + 0x368) == pvVar7))
        {
          param_1[0x368] = 0;
          param_1[0x369] = 0;
          param_1[0x36a] = 0;
          param_1[0x36b] = 0;
          param_1[0x36c] = 0;
          param_1[0x36d] = 0;
          param_1[0x36e] = 0;
          param_1[0x36f] = 0;
          param_1[0xc] = param_1[0xc] | 4;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x370) != (void *)0x0) && (*(void **)(param_1 + 0x370) == pvVar7))
        {
          param_1[0x370] = 0;
          param_1[0x371] = 0;
          param_1[0x372] = 0;
          param_1[0x373] = 0;
          param_1[0x374] = 0;
          param_1[0x375] = 0;
          param_1[0x376] = 0;
          param_1[0x377] = 0;
          param_1[0xc] = param_1[0xc] | 8;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x378) != (void *)0x0) && (*(void **)(param_1 + 0x378) == pvVar7))
        {
          param_1[0x378] = 0;
          param_1[0x379] = 0;
          param_1[0x37a] = 0;
          param_1[0x37b] = 0;
          param_1[0x37c] = 0;
          param_1[0x37d] = 0;
          param_1[0x37e] = 0;
          param_1[0x37f] = 0;
          param_1[0xc] = param_1[0xc] | 0x10;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x380) != (void *)0x0) && (*(void **)(param_1 + 0x380) == pvVar7))
        {
          param_1[0x380] = 0;
          param_1[0x381] = 0;
          param_1[0x382] = 0;
          param_1[899] = 0;
          param_1[900] = 0;
          param_1[0x385] = 0;
          param_1[0x386] = 0;
          param_1[0x387] = 0;
          param_1[0xc] = param_1[0xc] | 0x20;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x388) != (void *)0x0) && (*(void **)(param_1 + 0x388) == pvVar7))
        {
          param_1[0x388] = 0;
          param_1[0x389] = 0;
          param_1[0x38a] = 0;
          param_1[0x38b] = 0;
          param_1[0x38c] = 0;
          param_1[0x38d] = 0;
          param_1[0x38e] = 0;
          param_1[0x38f] = 0;
          param_1[0xc] = param_1[0xc] | 0x40;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if ((*(void **)(param_1 + 0x390) != (void *)0x0) && (*(void **)(param_1 + 0x390) == pvVar7))
        {
          param_1[0x390] = 0;
          param_1[0x391] = 0;
          param_1[0x392] = 0;
          param_1[0x393] = 0;
          param_1[0x394] = 0;
          param_1[0x395] = 0;
          param_1[0x396] = 0;
          param_1[0x397] = 0;
          param_1[0xc] = param_1[0xc] | 0x80;
          *param_1 = *param_1 | 8;
          pvVar7 = *(void **)(pbVar6 + 0x28);
        }
        if (pvVar7 != (void *)0x0) {
          if (*(long **)((long)pvVar7 + 0x20) != (long *)0x0) {
            (**(code **)(**(long **)((long)pvVar7 + 0x20) + 8))();
          }
          pvVar2 = *(void **)((long)pvVar7 + 8);
          if (pvVar2 != (void *)0x0) {
            piVar1 = (int *)((long)pvVar2 + 0x80);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_10032d8f0(pvVar2);
              operator_delete(pvVar2);
            }
          }
          operator_delete(pvVar7);
        }
        pbVar4 = pbVar6;
        pbVar5 = *(byte **)(pbVar6 + 8);
        if (*(byte **)(pbVar6 + 8) == (byte *)0x0) {
          do {
            pbVar3 = *(byte **)(pbVar4 + 0x10);
            bVar9 = *(byte **)pbVar3 != pbVar4;
            pbVar4 = pbVar3;
          } while (bVar9);
        }
        else {
          do {
            pbVar3 = pbVar5;
            pbVar5 = *(byte **)pbVar3;
          } while (*(byte **)pbVar3 != (byte *)0x0);
        }
        if (*(byte **)(param_1 + 0x27e8) == pbVar6) {
          *(byte **)(param_1 + 0x27e8) = pbVar3;
        }
        *(long *)(param_1 + 0x27f8) = *(long *)(param_1 + 0x27f8) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0x27f0),pbVar6);
        operator_delete(pbVar6);
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}

