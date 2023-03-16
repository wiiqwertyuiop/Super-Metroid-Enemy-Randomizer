# Super Metroid Enemy Randomizer (POC)
 
 v1

## Project Goal

Randomizers are very fun to play and watch! Current randomizers randomize just about everything EXCEPT the enemies, which I recently thought would be a fun addition for all the randos out there.

The goal is to have something that doesn't just work with the original game, but also can be patched over existing randomizer ROMs.

This current implementation is a proof of concept, but does accomplish the goal of replacing and randomizing the enemies in the game. It also removes locked grey doors so you don't have to clear the sprites in a room.

## What it does not do

- Bosses are left unchanged.
- Certain key sprites are ignored (i.e shutters, elevator sprites, etc.)
- Not *every* enemy in the game will make an appearance. This is to prevent crashing and soft locks.
- Currently there is no logic in place for progression. So impossible seeds are likely.

## Feedback is appreciated!

This is still a WIP project, so any ideas, feedback, or bugs are welcome.

Discord: wiiqwertyuiop#8815

## TODO/Considerations

- [ ] Need to come up with a way to avoid impossible seeds/too hard of enemies given to the player up front.

> Give sprites difficulties?
> Limit amount of difficult sprites?
> Limit sprites to a certain area?
> Tweak probabilities?
> Or some other kind of logic

- [ ] Some enemies are stuck inside walls. Logic to move them into an open area?

### Future ideas

- [ ] Increase max seed number?
- [ ] Option for replacing all enemies with one type?
- [ ] Replace enemies by area?
- [ ] Random properties/speed/speed2 for sprites?
- [ ] PUU not working + other mutli piece enemies
> https://metroidconstruction.com/SMMM/
