
undefined8 FUN_0040d680(void)

{
  __pid_t _Var1;
  time_t tVar2;
  _List_node_base *p_Var3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint local_34;
  
  if (DAT_0061da40 != '\0') {
    local_34 = 0;
    do {
      puVar6 = &DAT_0061d9c0;
      uVar7 = 0;
      do {
        if ((0 < *(__pid_t *)(puVar6 + 3)) &&
           (_Var1 = waitpid(*(__pid_t *)(puVar6 + 3),(int *)&local_34,1), _Var1 != 0)) {
          if (((local_34 & 0x7f) == 0) && ((local_34 >> 8 & 0xff) == 0)) {
LAB_0040d7d4:
            *(undefined4 *)(puVar6 + 3) = 0;
          }
          else {
            FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                         "Error: Subprocess with pid %d terminated abnormally.",
                         *(undefined4 *)(puVar6 + 3));
            tVar2 = time((time_t *)0x0);
            uVar8 = uVar7 & 0xffffffff;
            puVar4 = (undefined8 *)puVar6[1];
            while ((puVar4 != &DAT_0061d9c8 + uVar8 * 4 && (0x3c < tVar2 - puVar4[2]))) {
              std::_List_node_base::unhook();
              operator_delete(puVar4);
              puVar4 = (undefined8 *)puVar6[1];
            }
            p_Var3 = operator_new(0x18);
            *(time_t *)(p_Var3 + 0x10) = tVar2;
            std::_List_node_base::hook(p_Var3);
            puVar4 = (undefined8 *)(&DAT_0061d9c8)[uVar8 * 4];
            if (&DAT_0061d9c8 + uVar8 * 4 != puVar4) {
              uVar5 = 0;
              do {
                puVar4 = (undefined8 *)*puVar4;
                uVar5 = uVar5 + 1;
              } while (puVar4 != &DAT_0061d9c8 + uVar8 * 4);
              if (5 < uVar5) {
                FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                             "Error: Crash throttle limit for process \'%s\' exceeded. Stop restarting it."
                             ,*puVar6);
                goto LAB_0040d7d4;
              }
            }
            FUN_0040d3e0(uVar7 & 0xffffffff);
          }
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 4;
      } while (uVar7 != 4);
      sleep(1);
    } while (DAT_0061da40 != '\0');
  }
  return 0;
}

