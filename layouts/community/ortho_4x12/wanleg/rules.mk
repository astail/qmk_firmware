AUDIO_ENABLE = no
SWAP_HANDS_ENABLE = yes

ifeq ($(strip $(KEYBOARD)), jj40)
	SWAP_HANDS_ENABLE = no
endif