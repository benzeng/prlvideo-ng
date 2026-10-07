
void FUN_1004f4660(undefined8 *param_1,undefined8 param_2,CVmHostSharing *param_3,undefined1 param_4
                  )

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100bc3a70;
  CVmHostSharing::CVmHostSharing((CVmHostSharing *)(param_1 + 2),param_3);
  *(undefined1 *)(param_1 + 0x1a) = param_4;
  param_1[0x1b] = param_2;
  return;
}

