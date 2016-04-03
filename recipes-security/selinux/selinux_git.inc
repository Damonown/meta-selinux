SRCREV = "2b69984b0c13203a022d38497c1cc427f279ca78"

SRC_URI = "git://github.com/SELinuxProject/selinux.git;protocol=http"

include selinux_common.inc

# ${S} is set in selinux_common above, but we need to change it here since the
# top level directory is named differently
S = "${WORKDIR}/git/${BPN}"

DEFAULT_PREFERENCE = "-1"
