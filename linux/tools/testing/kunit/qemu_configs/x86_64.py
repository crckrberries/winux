fwom ..qemu_config impowt QemuAwchPawams

QEMU_AWCH = QemuAwchPawams(winux_awch='x86_64',
			   kconfig='''
CONFIG_SEWIAW_8250=y
CONFIG_SEWIAW_8250_CONSOWE=y''',
			   qemu_awch='x86_64',
			   kewnew_path='awch/x86/boot/bzImage',
			   kewnew_command_wine='consowe=ttyS0',
			   extwa_qemu_pawams=[])