
void FUN_100b1be60(long param_1)

{
  FUN_100df99c0("","dimg",0,"STRUCTURED_INFO:");
  FUN_100df99c0("","dimg",0,"Element size:           %u",*(undefined4 *)(param_1 + 8));
  FUN_100df99c0("","dimg",0,"Element granularity     %u",*(undefined4 *)(param_1 + 0xc));
  FUN_100df99c0("","dimg",0,"Block size              %u sect",*(undefined4 *)(param_1 + 0x10));
  FUN_100df99c0("","dimg",0,"BAT offset              %llu bytes",*(undefined8 *)(param_1 + 0x18));
  FUN_100df99c0("","dimg",0,"Data offset             %llu bytes",*(undefined8 *)(param_1 + 0x20));
  FUN_100df99c0("","dimg",0,"Prefix size             %u bytes",*(undefined4 *)(param_1 + 0x28));
  FUN_100df99c0("","dimg",0,"Postfix size            %u bytes",*(undefined4 *)(param_1 + 0x2c));
  FUN_100df99c0("","dimg",0,"Footer size             %u bytes",*(undefined4 *)(param_1 + 0x30));
  return;
}

