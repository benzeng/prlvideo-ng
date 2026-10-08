
void FUN_10091026a(undefined4 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((int)param_1[0xd] < 1) {
    *param_1 = 0xffffffff;
  }
  else {
    param_1[0xd] = param_1[0xd] + -1;
    *(undefined8 *)(param_1 + 8) =
         *(undefined8 *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18);
    param_1[0x14] = *(undefined4 *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 8);
    param_1[10] = *(undefined4 *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0xc);
    if (0 < *(int *)(*(long *)(param_1 + 2) + 0x28)) {
      if (*(long *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0x10) == 0) {
        _fwrite("exec save: allocation failed",1,0x1c,*(FILE **)PTR____stderrp_1021e1848);
        *param_1 = 0xfffffffa;
      }
      else {
        puVar2 = *(undefined1 **)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0x10);
        puVar3 = *(undefined1 **)(param_1 + 0x10);
        for (lVar1 = (long)*(int *)(*(long *)(param_1 + 2) + 0x28) * 4; lVar1 != 0;
            lVar1 = lVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
    }
  }
  return;
}

